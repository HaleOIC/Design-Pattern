package structual.decorator;

public interface DataSource {
    // write data to the datasource
    void writeData(String data);

    // read data from the datasource
    String readData();
}