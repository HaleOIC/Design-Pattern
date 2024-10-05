/**
 * Concrete Decorators call the wrapped object and alter its result in some way.
 * Concrete Decorators execute their behavior either before or after the call to
 * a wrapped object.
 */
public class EncryptionDecorator extends DataSourceDecorator {
    public EncryptionDecorator(DataSource source) {
        super(source);
    }

    @Override
    public void writeData(String data) {
        System.out.println("Encrypting data...");
        super.writeData(encode(data));
    }

    @Override
    public String readData() {
        System.out.println("Decrypting data...");
        return decode(super.readData());
    }

    private String encode(String data) {
        return data + " - Encoded";
    }

    private String decode(String data) {
        return data.replace(" - Encoded", "");
    }
}
