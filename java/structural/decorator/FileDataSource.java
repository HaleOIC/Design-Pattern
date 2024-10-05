import java.io.*;

public class FileDataSource implements DataSource {

    private File file;

    FileDataSource(String filename) {
        this.file = new File(filename);
        // Ensure the file exists
        try {
            if (!file.exists()) {
                file.createNewFile(); // Create a new file if it doesn't exist
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Override
    public void writeData(String data) {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(file))) {
            writer.write(data);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Override
    public String readData() {
        StringBuilder data = new StringBuilder();
        try (BufferedReader reader = new BufferedReader(new FileReader(file))) {
            String line;
            while ((line = reader.readLine()) != null) {
                data.append(line).append(System.lineSeparator()); // Append line and newline character
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return data.toString();
    }
}
