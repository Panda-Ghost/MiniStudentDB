#include "database.h"

int Database::callback( void *NotUsed, int argc, 
                        char **argv, char **azColName) {
  int i;
  for ( i = 0; i < argc; i++ ) {
    printf( "%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL" );
  }
  printf( "\n" );
  return 0;
}

Database::Database( const std::string& filename ) {
  sqlite3_open( filename.c_str(), &db ); 
}

Database::~Database() {
  sqlite3_close( db );
}

bool Database::execute( const std::string& sql ) {
  char* errmsg = 0;
  int rc = sqlite3_exec( db, sql.c_str(), callback, 0, &errmsg );
  if ( rc != SQLITE_OK ) {
    printf( "SQL error: %s\n", errmsg );
    sqlite3_free( errmsg );
    return false;
  }
  return true;
}
