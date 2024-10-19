package structual.decorator;

/**
 * Object to compress and decompress data
 */
public class CompressionDecorator extends DataSourceDecorator {

    CompressionDecorator(DataSource source) {
        super(source);
    }

    @Override
    public void writeData(String data) {
        System.out.println("Compressing data...");
        super.writeData(compress(data));
    }

    @Override
    public String readData() {
        System.out.println("Decompressing data...");
        return decompress(super.readData());
    }

    private String compress(String data) {
        return data + " - Compressed";
    }

    private String decompress(String data) {
        return data.replace(" - Compressed", "");
    }

}
