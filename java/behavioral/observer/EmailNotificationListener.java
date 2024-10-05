public class EmailNotificationListener implements EventListener {
    private String email;

    public EmailNotificationListener(String email) {
        this.email = email;
    }

    @Override
    public void update(String eventType, String filePath) {
        System.out.println("Email to " + email + ": Someone has performed " + eventType
                + " operation with the following file: " + filePath);
    }
}