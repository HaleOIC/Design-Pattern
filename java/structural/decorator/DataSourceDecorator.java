/**
 * Decorator base class should have the same interface as the other components.
 * The primary task of this class is to define the wrapping interface for all
 * concrete decorators. The default implementation code in the wrapping class
 * may include a member variable for storing a reference to a wrapped component
 * and initializing it.
 */
public class DataSourceDecorator implements DataSource {
    private DataSource wrappee;

    DataSourceDecorator(DataSource source) {
        this.wrappee = source;
    }

    @Override
    public void writeData(String data) {
        wrappee.writeData(data);
    }

    @Override
    public String readData() {
        return wrappee.readData();
    }

}
