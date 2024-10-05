import java.util.ArrayList;
import java.util.HashMap;

public class EventManager {
    HashMap<String, ArrayList<EventListener>> listeners = new HashMap<>();

    public EventManager(String... operations) {
        for (String operation : operations) {
            this.listeners.put(operation, new ArrayList<>());
        }
    }

    public void subscribe(String eventType, EventListener listener) {
        ArrayList<EventListener> subscribers = this.listeners.get(eventType);
        subscribers.add(listener);
    }

    public void unsubscribe(String eventType, EventListener listener) {
        ArrayList<EventListener> subscribers = this.listeners.get(eventType);
        subscribers.remove(listener);
    }

    public void notify(String eventType, String filepath) {
        ArrayList<EventListener> subscribers = this.listeners.get(eventType);
        for (EventListener listener : subscribers) {
            listener.update(eventType, filepath);
        }
    }

}