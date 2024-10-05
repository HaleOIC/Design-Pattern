public class Application {
    public static void main(String[] args) {
        // Create a FileDataSource object
        DataSource fileDataSource = new FileDataSource("example.txt");

        // Wrap it with a CompressionDecorator
        DataSource compressedDataSource = new CompressionDecorator(fileDataSource);

        // Further wrap it with an EncryptionDecorator
        DataSource encryptedCompressedDataSource = new EncryptionDecorator(compressedDataSource);

        // Now use the decorated object to write and read data
        String originalData = "This is the data to be written.";

        // Write data - this will compress and then encrypt the data before writing
        encryptedCompressedDataSource.writeData(originalData);

        // Read data - this will decrypt and then decompress the data after reading
        String processedData = encryptedCompressedDataSource.readData();

        // Print the processed data
        System.out.println("Processed Data: " + processedData);
    }
}
