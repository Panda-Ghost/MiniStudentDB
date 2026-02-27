#include <string>
#include <sqlite3.h>

class Database {
private:
  sqlite3* db;
  static int callback( void *NotUsed, int argc,
                       char **argv, char **azColName );
public:
  Database( const std::string& filename );
  ~Database();
  bool execute( const std::string& sql );
};
