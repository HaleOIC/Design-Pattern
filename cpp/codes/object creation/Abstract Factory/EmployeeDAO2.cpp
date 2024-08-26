/**
 * Abstract Factory
 * In order to make a series/bulks of classes to generate
 * at the same time, we should make them into the same 
 * abstract factory. Just like what we do as follow:
 */

// database related abstract class.
class IDBConnection {
public:
	virtual ~IDBConnection() {}
};

class IDBCommand { 
public:
	virtual ~IDBCommand() {}
};

class IDBDataReader {
public:
	virtual ~IDBDataReader() {}
};


class IDBFactory{
public:
	// remain for the children classes for implementation.
    virtual IDBConnection* CreateDBConnection()=0;
    virtual IDBCommand* CreateDBCommand()=0;
    virtual IDataReader* CreateDataReader()=0;

    virtual ~IDBFactory() {}
};


// concrete database class
// for SQL Server 
class SqlConnection: public IDBConnection{
    
};

class SqlCommand: public IDBCommand{
    
};

class SqlDataReader: public IDBDataReader{
    
};

class SQLDBFactory: public IDBFactory {
public:
	virtual IDBConnection* CreateDBConnection() {
		return new SqlConnection();
	}

	virtual IDBCommand* CreateDBCommand(){
		return new SqlCommand();
	}

	virtual IDataReader* CreateDataReader() {
		return new SqlDataReader();
	}
};


// for Oracle
class OracleConnection: public IDBConnection{
    
};

class OracleCommand: public IDBCommand{
    
};

class OracleDataReader: public IDBDataReader{
    
};

class OracleDBFactory: public IDBFactory {
public:
	virtual IDBConnection* CreateDBConnection() {
		return new OracleConnection();
	}

	virtual IDBCommand* CreateDBCommand(){
		return new OracleCommand();
	}

	virtual IDataReader* CreateDataReader() {
		return new OracleDataReader();
	}
};

// client class.
class EmployeeDAO{
private:

	IDBFactory* dbFactory;
    
public:

	EmployeeDAO(IDBFactory* dbFactory) { 	
		// push the binding time back, it can lead to dynamic binding.
		this->dbFactory = dbFactory;
	}

    vector<EmployeeDO> GetEmployees(){
        IDBConnection* connection =
        	dbFactory->CreateDBConnection();
        connection->ConnectionString("..."); 		// generate connection.

        IDBCommand* command = 
        	dbFactory->CreateDBCommand();
        command->SetConnection(connection);			// dependency.
        command->CommandText("...");

        IDBDataReader* reader = command->ExecuteReader(); 	// dependency
        while (reader->Read()){
        	//...
        }
    }
};
