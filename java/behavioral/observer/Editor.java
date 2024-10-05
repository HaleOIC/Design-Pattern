import java.io.File;

public class Editor {
    EventManager events;
    File file;

    public Editor() {
        this.events = new EventManager("open", "save");
    }

    public void openFile(String filePath) {
        System.out.println("Opening file " + filePath);
        file = new File(filePath);
        events.notify("open", filePath);
    }

    public void saveFile() {
        System.out.println("Saving file " + file.getName());
        events.notify("save", file.getName());
    }
}
