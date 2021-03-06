/* Generated by the Systemtap dtrace wrapper */


#define _SDT_HAS_SEMAPHORES 1


#define STAP_HAS_SEMAPHORES 1 /* deprecated */


#include <sys/sdt.h>

/* MYSQL_CONNECTION_START ( unsigned long conn_id, char *user, char *host ) */
#if defined STAP_SDT_V1
#define MYSQL_CONNECTION_START_ENABLED() __builtin_expect (connection__start_semaphore, 0)
#define mysql_connection__start_semaphore connection__start_semaphore
#else
#define MYSQL_CONNECTION_START_ENABLED() __builtin_expect (mysql_connection__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_connection__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_CONNECTION_START(arg1, arg2, arg3) \
DTRACE_PROBE3 (mysql, connection__start, arg1, arg2, arg3)

/* MYSQL_CONNECTION_DONE ( int status, unsigned long conn_id ) */
#if defined STAP_SDT_V1
#define MYSQL_CONNECTION_DONE_ENABLED() __builtin_expect (connection__done_semaphore, 0)
#define mysql_connection__done_semaphore connection__done_semaphore
#else
#define MYSQL_CONNECTION_DONE_ENABLED() __builtin_expect (mysql_connection__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_connection__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_CONNECTION_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, connection__done, arg1, arg2)

/* MYSQL_COMMAND_START ( unsigned long conn_id, int command, char *user, char *host ) */
#if defined STAP_SDT_V1
#define MYSQL_COMMAND_START_ENABLED() __builtin_expect (command__start_semaphore, 0)
#define mysql_command__start_semaphore command__start_semaphore
#else
#define MYSQL_COMMAND_START_ENABLED() __builtin_expect (mysql_command__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_command__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_COMMAND_START(arg1, arg2, arg3, arg4) \
DTRACE_PROBE4 (mysql, command__start, arg1, arg2, arg3, arg4)

/* MYSQL_COMMAND_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_COMMAND_DONE_ENABLED() __builtin_expect (command__done_semaphore, 0)
#define mysql_command__done_semaphore command__done_semaphore
#else
#define MYSQL_COMMAND_DONE_ENABLED() __builtin_expect (mysql_command__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_command__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_COMMAND_DONE(arg1) \
DTRACE_PROBE1 (mysql, command__done, arg1)

/* MYSQL_QUERY_START ( char *query, unsigned long conn_id, char *db_name, char *user, char *host ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_START_ENABLED() __builtin_expect (query__start_semaphore, 0)
#define mysql_query__start_semaphore query__start_semaphore
#else
#define MYSQL_QUERY_START_ENABLED() __builtin_expect (mysql_query__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_START(arg1, arg2, arg3, arg4, arg5) \
DTRACE_PROBE5 (mysql, query__start, arg1, arg2, arg3, arg4, arg5)

/* MYSQL_QUERY_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_DONE_ENABLED() __builtin_expect (query__done_semaphore, 0)
#define mysql_query__done_semaphore query__done_semaphore
#else
#define MYSQL_QUERY_DONE_ENABLED() __builtin_expect (mysql_query__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_DONE(arg1) \
DTRACE_PROBE1 (mysql, query__done, arg1)

/* MYSQL_QUERY_PARSE_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_PARSE_START_ENABLED() __builtin_expect (query__parse__start_semaphore, 0)
#define mysql_query__parse__start_semaphore query__parse__start_semaphore
#else
#define MYSQL_QUERY_PARSE_START_ENABLED() __builtin_expect (mysql_query__parse__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__parse__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_PARSE_START(arg1) \
DTRACE_PROBE1 (mysql, query__parse__start, arg1)

/* MYSQL_QUERY_PARSE_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_PARSE_DONE_ENABLED() __builtin_expect (query__parse__done_semaphore, 0)
#define mysql_query__parse__done_semaphore query__parse__done_semaphore
#else
#define MYSQL_QUERY_PARSE_DONE_ENABLED() __builtin_expect (mysql_query__parse__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__parse__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_PARSE_DONE(arg1) \
DTRACE_PROBE1 (mysql, query__parse__done, arg1)

/* MYSQL_QUERY_CACHE_HIT ( char *query, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_CACHE_HIT_ENABLED() __builtin_expect (query__cache__hit_semaphore, 0)
#define mysql_query__cache__hit_semaphore query__cache__hit_semaphore
#else
#define MYSQL_QUERY_CACHE_HIT_ENABLED() __builtin_expect (mysql_query__cache__hit_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__cache__hit_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_CACHE_HIT(arg1, arg2) \
DTRACE_PROBE2 (mysql, query__cache__hit, arg1, arg2)

/* MYSQL_QUERY_CACHE_MISS ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_CACHE_MISS_ENABLED() __builtin_expect (query__cache__miss_semaphore, 0)
#define mysql_query__cache__miss_semaphore query__cache__miss_semaphore
#else
#define MYSQL_QUERY_CACHE_MISS_ENABLED() __builtin_expect (mysql_query__cache__miss_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__cache__miss_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_CACHE_MISS(arg1) \
DTRACE_PROBE1 (mysql, query__cache__miss, arg1)

/* MYSQL_QUERY_EXEC_START ( char *query, unsigned long connid, char *db_name, char *user, char *host, int exec_type ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_EXEC_START_ENABLED() __builtin_expect (query__exec__start_semaphore, 0)
#define mysql_query__exec__start_semaphore query__exec__start_semaphore
#else
#define MYSQL_QUERY_EXEC_START_ENABLED() __builtin_expect (mysql_query__exec__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__exec__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_EXEC_START(arg1, arg2, arg3, arg4, arg5, arg6) \
DTRACE_PROBE6 (mysql, query__exec__start, arg1, arg2, arg3, arg4, arg5, arg6)

/* MYSQL_QUERY_EXEC_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_QUERY_EXEC_DONE_ENABLED() __builtin_expect (query__exec__done_semaphore, 0)
#define mysql_query__exec__done_semaphore query__exec__done_semaphore
#else
#define MYSQL_QUERY_EXEC_DONE_ENABLED() __builtin_expect (mysql_query__exec__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_query__exec__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_QUERY_EXEC_DONE(arg1) \
DTRACE_PROBE1 (mysql, query__exec__done, arg1)

/* MYSQL_INSERT_ROW_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_INSERT_ROW_START_ENABLED() __builtin_expect (insert__row__start_semaphore, 0)
#define mysql_insert__row__start_semaphore insert__row__start_semaphore
#else
#define MYSQL_INSERT_ROW_START_ENABLED() __builtin_expect (mysql_insert__row__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_insert__row__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INSERT_ROW_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, insert__row__start, arg1, arg2)

/* MYSQL_INSERT_ROW_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_INSERT_ROW_DONE_ENABLED() __builtin_expect (insert__row__done_semaphore, 0)
#define mysql_insert__row__done_semaphore insert__row__done_semaphore
#else
#define MYSQL_INSERT_ROW_DONE_ENABLED() __builtin_expect (mysql_insert__row__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_insert__row__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INSERT_ROW_DONE(arg1) \
DTRACE_PROBE1 (mysql, insert__row__done, arg1)

/* MYSQL_UPDATE_ROW_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_UPDATE_ROW_START_ENABLED() __builtin_expect (update__row__start_semaphore, 0)
#define mysql_update__row__start_semaphore update__row__start_semaphore
#else
#define MYSQL_UPDATE_ROW_START_ENABLED() __builtin_expect (mysql_update__row__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_update__row__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_UPDATE_ROW_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, update__row__start, arg1, arg2)

/* MYSQL_UPDATE_ROW_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_UPDATE_ROW_DONE_ENABLED() __builtin_expect (update__row__done_semaphore, 0)
#define mysql_update__row__done_semaphore update__row__done_semaphore
#else
#define MYSQL_UPDATE_ROW_DONE_ENABLED() __builtin_expect (mysql_update__row__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_update__row__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_UPDATE_ROW_DONE(arg1) \
DTRACE_PROBE1 (mysql, update__row__done, arg1)

/* MYSQL_DELETE_ROW_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_DELETE_ROW_START_ENABLED() __builtin_expect (delete__row__start_semaphore, 0)
#define mysql_delete__row__start_semaphore delete__row__start_semaphore
#else
#define MYSQL_DELETE_ROW_START_ENABLED() __builtin_expect (mysql_delete__row__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_delete__row__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_DELETE_ROW_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, delete__row__start, arg1, arg2)

/* MYSQL_DELETE_ROW_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_DELETE_ROW_DONE_ENABLED() __builtin_expect (delete__row__done_semaphore, 0)
#define mysql_delete__row__done_semaphore delete__row__done_semaphore
#else
#define MYSQL_DELETE_ROW_DONE_ENABLED() __builtin_expect (mysql_delete__row__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_delete__row__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_DELETE_ROW_DONE(arg1) \
DTRACE_PROBE1 (mysql, delete__row__done, arg1)

/* MYSQL_READ_ROW_START ( char *db, char *table, int scan_flag ) */
#if defined STAP_SDT_V1
#define MYSQL_READ_ROW_START_ENABLED() __builtin_expect (read__row__start_semaphore, 0)
#define mysql_read__row__start_semaphore read__row__start_semaphore
#else
#define MYSQL_READ_ROW_START_ENABLED() __builtin_expect (mysql_read__row__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_read__row__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_READ_ROW_START(arg1, arg2, arg3) \
DTRACE_PROBE3 (mysql, read__row__start, arg1, arg2, arg3)

/* MYSQL_READ_ROW_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_READ_ROW_DONE_ENABLED() __builtin_expect (read__row__done_semaphore, 0)
#define mysql_read__row__done_semaphore read__row__done_semaphore
#else
#define MYSQL_READ_ROW_DONE_ENABLED() __builtin_expect (mysql_read__row__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_read__row__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_READ_ROW_DONE(arg1) \
DTRACE_PROBE1 (mysql, read__row__done, arg1)

/* MYSQL_INDEX_READ_ROW_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_INDEX_READ_ROW_START_ENABLED() __builtin_expect (index__read__row__start_semaphore, 0)
#define mysql_index__read__row__start_semaphore index__read__row__start_semaphore
#else
#define MYSQL_INDEX_READ_ROW_START_ENABLED() __builtin_expect (mysql_index__read__row__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_index__read__row__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INDEX_READ_ROW_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, index__read__row__start, arg1, arg2)

/* MYSQL_INDEX_READ_ROW_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_INDEX_READ_ROW_DONE_ENABLED() __builtin_expect (index__read__row__done_semaphore, 0)
#define mysql_index__read__row__done_semaphore index__read__row__done_semaphore
#else
#define MYSQL_INDEX_READ_ROW_DONE_ENABLED() __builtin_expect (mysql_index__read__row__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_index__read__row__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INDEX_READ_ROW_DONE(arg1) \
DTRACE_PROBE1 (mysql, index__read__row__done, arg1)

/* MYSQL_HANDLER_RDLOCK_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_HANDLER_RDLOCK_START_ENABLED() __builtin_expect (handler__rdlock__start_semaphore, 0)
#define mysql_handler__rdlock__start_semaphore handler__rdlock__start_semaphore
#else
#define MYSQL_HANDLER_RDLOCK_START_ENABLED() __builtin_expect (mysql_handler__rdlock__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_handler__rdlock__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_HANDLER_RDLOCK_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, handler__rdlock__start, arg1, arg2)

/* MYSQL_HANDLER_WRLOCK_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_HANDLER_WRLOCK_START_ENABLED() __builtin_expect (handler__wrlock__start_semaphore, 0)
#define mysql_handler__wrlock__start_semaphore handler__wrlock__start_semaphore
#else
#define MYSQL_HANDLER_WRLOCK_START_ENABLED() __builtin_expect (mysql_handler__wrlock__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_handler__wrlock__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_HANDLER_WRLOCK_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, handler__wrlock__start, arg1, arg2)

/* MYSQL_HANDLER_UNLOCK_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_HANDLER_UNLOCK_START_ENABLED() __builtin_expect (handler__unlock__start_semaphore, 0)
#define mysql_handler__unlock__start_semaphore handler__unlock__start_semaphore
#else
#define MYSQL_HANDLER_UNLOCK_START_ENABLED() __builtin_expect (mysql_handler__unlock__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_handler__unlock__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_HANDLER_UNLOCK_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, handler__unlock__start, arg1, arg2)

/* MYSQL_HANDLER_RDLOCK_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_HANDLER_RDLOCK_DONE_ENABLED() __builtin_expect (handler__rdlock__done_semaphore, 0)
#define mysql_handler__rdlock__done_semaphore handler__rdlock__done_semaphore
#else
#define MYSQL_HANDLER_RDLOCK_DONE_ENABLED() __builtin_expect (mysql_handler__rdlock__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_handler__rdlock__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_HANDLER_RDLOCK_DONE(arg1) \
DTRACE_PROBE1 (mysql, handler__rdlock__done, arg1)

/* MYSQL_HANDLER_WRLOCK_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_HANDLER_WRLOCK_DONE_ENABLED() __builtin_expect (handler__wrlock__done_semaphore, 0)
#define mysql_handler__wrlock__done_semaphore handler__wrlock__done_semaphore
#else
#define MYSQL_HANDLER_WRLOCK_DONE_ENABLED() __builtin_expect (mysql_handler__wrlock__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_handler__wrlock__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_HANDLER_WRLOCK_DONE(arg1) \
DTRACE_PROBE1 (mysql, handler__wrlock__done, arg1)

/* MYSQL_HANDLER_UNLOCK_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_HANDLER_UNLOCK_DONE_ENABLED() __builtin_expect (handler__unlock__done_semaphore, 0)
#define mysql_handler__unlock__done_semaphore handler__unlock__done_semaphore
#else
#define MYSQL_HANDLER_UNLOCK_DONE_ENABLED() __builtin_expect (mysql_handler__unlock__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_handler__unlock__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_HANDLER_UNLOCK_DONE(arg1) \
DTRACE_PROBE1 (mysql, handler__unlock__done, arg1)

/* MYSQL_FILESORT_START ( char *db, char *table ) */
#if defined STAP_SDT_V1
#define MYSQL_FILESORT_START_ENABLED() __builtin_expect (filesort__start_semaphore, 0)
#define mysql_filesort__start_semaphore filesort__start_semaphore
#else
#define MYSQL_FILESORT_START_ENABLED() __builtin_expect (mysql_filesort__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_filesort__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_FILESORT_START(arg1, arg2) \
DTRACE_PROBE2 (mysql, filesort__start, arg1, arg2)

/* MYSQL_FILESORT_DONE ( int status, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_FILESORT_DONE_ENABLED() __builtin_expect (filesort__done_semaphore, 0)
#define mysql_filesort__done_semaphore filesort__done_semaphore
#else
#define MYSQL_FILESORT_DONE_ENABLED() __builtin_expect (mysql_filesort__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_filesort__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_FILESORT_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, filesort__done, arg1, arg2)

/* MYSQL_SELECT_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_SELECT_START_ENABLED() __builtin_expect (select__start_semaphore, 0)
#define mysql_select__start_semaphore select__start_semaphore
#else
#define MYSQL_SELECT_START_ENABLED() __builtin_expect (mysql_select__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_select__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_SELECT_START(arg1) \
DTRACE_PROBE1 (mysql, select__start, arg1)

/* MYSQL_SELECT_DONE ( int status, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_SELECT_DONE_ENABLED() __builtin_expect (select__done_semaphore, 0)
#define mysql_select__done_semaphore select__done_semaphore
#else
#define MYSQL_SELECT_DONE_ENABLED() __builtin_expect (mysql_select__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_select__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_SELECT_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, select__done, arg1, arg2)

/* MYSQL_INSERT_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_INSERT_START_ENABLED() __builtin_expect (insert__start_semaphore, 0)
#define mysql_insert__start_semaphore insert__start_semaphore
#else
#define MYSQL_INSERT_START_ENABLED() __builtin_expect (mysql_insert__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_insert__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INSERT_START(arg1) \
DTRACE_PROBE1 (mysql, insert__start, arg1)

/* MYSQL_INSERT_DONE ( int status, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_INSERT_DONE_ENABLED() __builtin_expect (insert__done_semaphore, 0)
#define mysql_insert__done_semaphore insert__done_semaphore
#else
#define MYSQL_INSERT_DONE_ENABLED() __builtin_expect (mysql_insert__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_insert__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INSERT_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, insert__done, arg1, arg2)

/* MYSQL_INSERT_SELECT_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_INSERT_SELECT_START_ENABLED() __builtin_expect (insert__select__start_semaphore, 0)
#define mysql_insert__select__start_semaphore insert__select__start_semaphore
#else
#define MYSQL_INSERT_SELECT_START_ENABLED() __builtin_expect (mysql_insert__select__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_insert__select__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INSERT_SELECT_START(arg1) \
DTRACE_PROBE1 (mysql, insert__select__start, arg1)

/* MYSQL_INSERT_SELECT_DONE ( int status, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_INSERT_SELECT_DONE_ENABLED() __builtin_expect (insert__select__done_semaphore, 0)
#define mysql_insert__select__done_semaphore insert__select__done_semaphore
#else
#define MYSQL_INSERT_SELECT_DONE_ENABLED() __builtin_expect (mysql_insert__select__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_insert__select__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_INSERT_SELECT_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, insert__select__done, arg1, arg2)

/* MYSQL_UPDATE_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_UPDATE_START_ENABLED() __builtin_expect (update__start_semaphore, 0)
#define mysql_update__start_semaphore update__start_semaphore
#else
#define MYSQL_UPDATE_START_ENABLED() __builtin_expect (mysql_update__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_update__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_UPDATE_START(arg1) \
DTRACE_PROBE1 (mysql, update__start, arg1)

/* MYSQL_UPDATE_DONE ( int status, unsigned long rowsmatches, unsigned long rowschanged ) */
#if defined STAP_SDT_V1
#define MYSQL_UPDATE_DONE_ENABLED() __builtin_expect (update__done_semaphore, 0)
#define mysql_update__done_semaphore update__done_semaphore
#else
#define MYSQL_UPDATE_DONE_ENABLED() __builtin_expect (mysql_update__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_update__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_UPDATE_DONE(arg1, arg2, arg3) \
DTRACE_PROBE3 (mysql, update__done, arg1, arg2, arg3)

/* MYSQL_MULTI_UPDATE_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_MULTI_UPDATE_START_ENABLED() __builtin_expect (multi__update__start_semaphore, 0)
#define mysql_multi__update__start_semaphore multi__update__start_semaphore
#else
#define MYSQL_MULTI_UPDATE_START_ENABLED() __builtin_expect (mysql_multi__update__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_multi__update__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_MULTI_UPDATE_START(arg1) \
DTRACE_PROBE1 (mysql, multi__update__start, arg1)

/* MYSQL_MULTI_UPDATE_DONE ( int status, unsigned long rowsmatches, unsigned long rowschanged ) */
#if defined STAP_SDT_V1
#define MYSQL_MULTI_UPDATE_DONE_ENABLED() __builtin_expect (multi__update__done_semaphore, 0)
#define mysql_multi__update__done_semaphore multi__update__done_semaphore
#else
#define MYSQL_MULTI_UPDATE_DONE_ENABLED() __builtin_expect (mysql_multi__update__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_multi__update__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_MULTI_UPDATE_DONE(arg1, arg2, arg3) \
DTRACE_PROBE3 (mysql, multi__update__done, arg1, arg2, arg3)

/* MYSQL_DELETE_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_DELETE_START_ENABLED() __builtin_expect (delete__start_semaphore, 0)
#define mysql_delete__start_semaphore delete__start_semaphore
#else
#define MYSQL_DELETE_START_ENABLED() __builtin_expect (mysql_delete__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_delete__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_DELETE_START(arg1) \
DTRACE_PROBE1 (mysql, delete__start, arg1)

/* MYSQL_DELETE_DONE ( int status, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_DELETE_DONE_ENABLED() __builtin_expect (delete__done_semaphore, 0)
#define mysql_delete__done_semaphore delete__done_semaphore
#else
#define MYSQL_DELETE_DONE_ENABLED() __builtin_expect (mysql_delete__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_delete__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_DELETE_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, delete__done, arg1, arg2)

/* MYSQL_MULTI_DELETE_START ( char *query ) */
#if defined STAP_SDT_V1
#define MYSQL_MULTI_DELETE_START_ENABLED() __builtin_expect (multi__delete__start_semaphore, 0)
#define mysql_multi__delete__start_semaphore multi__delete__start_semaphore
#else
#define MYSQL_MULTI_DELETE_START_ENABLED() __builtin_expect (mysql_multi__delete__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_multi__delete__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_MULTI_DELETE_START(arg1) \
DTRACE_PROBE1 (mysql, multi__delete__start, arg1)

/* MYSQL_MULTI_DELETE_DONE ( int status, unsigned long rows ) */
#if defined STAP_SDT_V1
#define MYSQL_MULTI_DELETE_DONE_ENABLED() __builtin_expect (multi__delete__done_semaphore, 0)
#define mysql_multi__delete__done_semaphore multi__delete__done_semaphore
#else
#define MYSQL_MULTI_DELETE_DONE_ENABLED() __builtin_expect (mysql_multi__delete__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_multi__delete__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_MULTI_DELETE_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, multi__delete__done, arg1, arg2)

/* MYSQL_NET_READ_START ( ) */
#if defined STAP_SDT_V1
#define MYSQL_NET_READ_START_ENABLED() __builtin_expect (net__read__start_semaphore, 0)
#define mysql_net__read__start_semaphore net__read__start_semaphore
#else
#define MYSQL_NET_READ_START_ENABLED() __builtin_expect (mysql_net__read__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_net__read__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_NET_READ_START() \
DTRACE_PROBE (mysql, net__read__start)

/* MYSQL_NET_READ_DONE ( int status, unsigned long bytes ) */
#if defined STAP_SDT_V1
#define MYSQL_NET_READ_DONE_ENABLED() __builtin_expect (net__read__done_semaphore, 0)
#define mysql_net__read__done_semaphore net__read__done_semaphore
#else
#define MYSQL_NET_READ_DONE_ENABLED() __builtin_expect (mysql_net__read__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_net__read__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_NET_READ_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, net__read__done, arg1, arg2)

/* MYSQL_NET_WRITE_START ( unsigned long bytes ) */
#if defined STAP_SDT_V1
#define MYSQL_NET_WRITE_START_ENABLED() __builtin_expect (net__write__start_semaphore, 0)
#define mysql_net__write__start_semaphore net__write__start_semaphore
#else
#define MYSQL_NET_WRITE_START_ENABLED() __builtin_expect (mysql_net__write__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_net__write__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_NET_WRITE_START(arg1) \
DTRACE_PROBE1 (mysql, net__write__start, arg1)

/* MYSQL_NET_WRITE_DONE ( int status ) */
#if defined STAP_SDT_V1
#define MYSQL_NET_WRITE_DONE_ENABLED() __builtin_expect (net__write__done_semaphore, 0)
#define mysql_net__write__done_semaphore net__write__done_semaphore
#else
#define MYSQL_NET_WRITE_DONE_ENABLED() __builtin_expect (mysql_net__write__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_net__write__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_NET_WRITE_DONE(arg1) \
DTRACE_PROBE1 (mysql, net__write__done, arg1)

/* MYSQL_KEYCACHE_READ_START ( char *filepath, unsigned long bytes, unsigned long mem_used, unsigned long mem_free ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_READ_START_ENABLED() __builtin_expect (keycache__read__start_semaphore, 0)
#define mysql_keycache__read__start_semaphore keycache__read__start_semaphore
#else
#define MYSQL_KEYCACHE_READ_START_ENABLED() __builtin_expect (mysql_keycache__read__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__read__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_READ_START(arg1, arg2, arg3, arg4) \
DTRACE_PROBE4 (mysql, keycache__read__start, arg1, arg2, arg3, arg4)

/* MYSQL_KEYCACHE_READ_BLOCK ( unsigned long bytes ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_READ_BLOCK_ENABLED() __builtin_expect (keycache__read__block_semaphore, 0)
#define mysql_keycache__read__block_semaphore keycache__read__block_semaphore
#else
#define MYSQL_KEYCACHE_READ_BLOCK_ENABLED() __builtin_expect (mysql_keycache__read__block_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__read__block_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_READ_BLOCK(arg1) \
DTRACE_PROBE1 (mysql, keycache__read__block, arg1)

/* MYSQL_KEYCACHE_READ_HIT ( ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_READ_HIT_ENABLED() __builtin_expect (keycache__read__hit_semaphore, 0)
#define mysql_keycache__read__hit_semaphore keycache__read__hit_semaphore
#else
#define MYSQL_KEYCACHE_READ_HIT_ENABLED() __builtin_expect (mysql_keycache__read__hit_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__read__hit_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_READ_HIT() \
DTRACE_PROBE (mysql, keycache__read__hit)

/* MYSQL_KEYCACHE_READ_MISS ( ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_READ_MISS_ENABLED() __builtin_expect (keycache__read__miss_semaphore, 0)
#define mysql_keycache__read__miss_semaphore keycache__read__miss_semaphore
#else
#define MYSQL_KEYCACHE_READ_MISS_ENABLED() __builtin_expect (mysql_keycache__read__miss_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__read__miss_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_READ_MISS() \
DTRACE_PROBE (mysql, keycache__read__miss)

/* MYSQL_KEYCACHE_READ_DONE ( unsigned long mem_used, unsigned long mem_free ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_READ_DONE_ENABLED() __builtin_expect (keycache__read__done_semaphore, 0)
#define mysql_keycache__read__done_semaphore keycache__read__done_semaphore
#else
#define MYSQL_KEYCACHE_READ_DONE_ENABLED() __builtin_expect (mysql_keycache__read__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__read__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_READ_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, keycache__read__done, arg1, arg2)

/* MYSQL_KEYCACHE_WRITE_START ( char *filepath, unsigned long bytes, unsigned long mem_used, unsigned long mem_free ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_WRITE_START_ENABLED() __builtin_expect (keycache__write__start_semaphore, 0)
#define mysql_keycache__write__start_semaphore keycache__write__start_semaphore
#else
#define MYSQL_KEYCACHE_WRITE_START_ENABLED() __builtin_expect (mysql_keycache__write__start_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__write__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_WRITE_START(arg1, arg2, arg3, arg4) \
DTRACE_PROBE4 (mysql, keycache__write__start, arg1, arg2, arg3, arg4)

/* MYSQL_KEYCACHE_WRITE_BLOCK ( unsigned long bytes ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_WRITE_BLOCK_ENABLED() __builtin_expect (keycache__write__block_semaphore, 0)
#define mysql_keycache__write__block_semaphore keycache__write__block_semaphore
#else
#define MYSQL_KEYCACHE_WRITE_BLOCK_ENABLED() __builtin_expect (mysql_keycache__write__block_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__write__block_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_WRITE_BLOCK(arg1) \
DTRACE_PROBE1 (mysql, keycache__write__block, arg1)

/* MYSQL_KEYCACHE_WRITE_DONE ( unsigned long mem_used, unsigned long mem_free ) */
#if defined STAP_SDT_V1
#define MYSQL_KEYCACHE_WRITE_DONE_ENABLED() __builtin_expect (keycache__write__done_semaphore, 0)
#define mysql_keycache__write__done_semaphore keycache__write__done_semaphore
#else
#define MYSQL_KEYCACHE_WRITE_DONE_ENABLED() __builtin_expect (mysql_keycache__write__done_semaphore, 0)
#endif
__extension__ extern unsigned short mysql_keycache__write__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define MYSQL_KEYCACHE_WRITE_DONE(arg1, arg2) \
DTRACE_PROBE2 (mysql, keycache__write__done, arg1, arg2)

