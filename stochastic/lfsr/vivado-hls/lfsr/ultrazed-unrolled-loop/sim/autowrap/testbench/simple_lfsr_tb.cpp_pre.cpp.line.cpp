#pragma line 1 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr_tb.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr_tb.cpp"
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 3
#pragma empty_line
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++config.h" 1 3
#pragma line 153 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++config.h" 3
namespace std
{
  typedef unsigned int size_t;
  typedef int ptrdiff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 393 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++config.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/os_defines.h" 1 3
#pragma line 394 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++config.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/cpu_defines.h" 1 3
#pragma line 397 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++config.h" 2 3
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 1 3
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
#pragma empty_line
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 3
#pragma empty_line
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iosfwd" 1 3
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iosfwd" 3
#pragma empty_line
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iosfwd" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stringfwd.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stringfwd.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stringfwd.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _Alloc>
    class allocator;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<class _CharT>
    struct char_traits;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;
#pragma empty_line
  template<> struct char_traits<char>;
#pragma empty_line
  typedef basic_string<char> string;
#pragma empty_line
#pragma empty_line
  template<> struct char_traits<wchar_t>;
#pragma empty_line
  typedef basic_string<wchar_t> wstring;
#pragma line 85 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stringfwd.h" 3
#pragma empty_line
}
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iosfwd" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 1 3
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
#pragma empty_line
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
#pragma empty_line
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 1 3
#pragma line 18 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/_mingw.h" 1 3
#pragma line 32 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/_mingw.h" 3
#pragma empty_line
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/_mingw.h" 3
#pragma line 19 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 1 3 4
#pragma line 212 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 3 4
typedef unsigned int size_t;
#pragma line 353 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 3 4
typedef short unsigned int wint_t;
#pragma line 27 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stdarg.h" 1 3 4
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
#pragma line 32 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 2 3
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wctype.h" 1 3
#pragma line 32 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wctype.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 1 3 4
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wctype.h" 2 3
#pragma line 54 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wctype.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef wchar_t wctype_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswalnum(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswalpha(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswascii(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswcntrl(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswctype(wint_t, wctype_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) is_wctype(wint_t, wctype_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswdigit(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswgraph(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswlower(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswprint(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswpunct(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswspace(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswupper(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswxdigit(wint_t);
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswblank (wint_t);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towlower (wint_t);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towupper (wint_t);
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isleadbyte (int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern __attribute__ ((__dllimport__)) unsigned short _ctype[];
#pragma empty_line
#pragma empty_line
  extern __attribute__ ((__dllimport__)) unsigned short* _pctype;
#pragma line 148 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wctype.h" 3
typedef wchar_t wctrans_t;
#pragma line 157 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wctype.h" 3
wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towctrans(wint_t, wctrans_t);
wctrans_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wctrans(const char*);
wctype_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wctype(const char*);
#pragma empty_line
#pragma empty_line
}
#pragma line 46 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/sys/types.h" 1 3
#pragma line 21 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/sys/types.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 1 3 4
#pragma line 150 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 3 4
typedef int ptrdiff_t;
#pragma line 22 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/sys/types.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long __time32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long __time64_t;
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/sys/types.h" 3
typedef __time32_t time_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long _off_t;
#pragma empty_line
#pragma empty_line
typedef _off_t off_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned int _dev_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef _dev_t dev_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef short _ino_t;
#pragma empty_line
#pragma empty_line
typedef _ino_t ino_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int _pid_t;
#pragma empty_line
#pragma empty_line
typedef _pid_t pid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned short _mode_t;
#pragma empty_line
#pragma empty_line
typedef _mode_t mode_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int _sigset_t;
#pragma empty_line
#pragma empty_line
typedef _sigset_t sigset_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int _ssize_t;
#pragma empty_line
#pragma empty_line
typedef _ssize_t ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long fpos64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long off64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned int useconds_t;
#pragma line 51 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 2 3
#pragma line 63 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct _iobuf
{
 char* _ptr;
 int _cnt;
 char* _base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char* _tmpfname;
} FILE;
#pragma line 87 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
struct tm {
        int tm_sec;
        int tm_min;
        int tm_hour;
        int tm_mday;
        int tm_mon;
        int tm_year;
        int tm_wday;
        int tm_yday;
        int tm_isdst;
        };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wprintf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwprintf (FILE*, const wchar_t*, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwprintf (const wchar_t*, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wscanf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetwc (wchar_t, FILE*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswprintf (wchar_t*, const wchar_t*, __builtin_va_list);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwc (wint_t, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwchar (wint_t);
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getws (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putws (const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfdopen(int, const wchar_t *);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfopen (const wchar_t*, const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfreopen (const wchar_t*, const wchar_t*, FILE*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfsopen (const wchar_t*, const wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtmpnam (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtempnam (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wrename (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wremove (const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wperror (const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wpopen (const wchar_t*, const wchar_t*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snwprintf (wchar_t*, size_t, const wchar_t*, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnwprintf (wchar_t*, size_t, const wchar_t*, __builtin_va_list);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwscanf (const wchar_t * __restrict__, __builtin_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwscanf (FILE * __restrict__,
         const wchar_t * __restrict__, __builtin_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswscanf (const wchar_t * __restrict__,
         const wchar_t * __restrict__, __builtin_va_list);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstoul (const wchar_t*, wchar_t**, int);
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstod (const wchar_t*, wchar_t**);
#pragma empty_line
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstof (const wchar_t * __restrict__, wchar_t ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);
#pragma empty_line
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wgetenv(const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wputenv(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsystem(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfullpath (wchar_t*, const wchar_t*, size_t);
#pragma line 187 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wasctime (const struct tm*);
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wctime (const time_t*);
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wstrdate (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wstrtime (wchar_t*);
#pragma line 207 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsftime (wchar_t*, size_t, const wchar_t*, const struct tm*);
#pragma line 217 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscat (wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcschr (const wchar_t*, wchar_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscpy (wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscspn (const wchar_t*, const wchar_t*);
#pragma empty_line
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcslen (const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncat (wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncmp(const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncpy(wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcspbrk(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrchr(const wchar_t*, wchar_t);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsspn(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsstr(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstok(wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsxfrm(wchar_t*, const wchar_t*, size_t);
#pragma line 243 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsupr (wchar_t*);
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsncoll(const wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnicoll(const wchar_t*, const wchar_t*, size_t);
#pragma line 264 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscmpi (const wchar_t *, const wchar_t *);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsupr (wchar_t*);
#pragma line 292 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
typedef wchar_t _Wint_t;
#pragma empty_line
#pragma empty_line
typedef int mbstate_t;
#pragma empty_line
wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) btowc(int);
size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbrlen(const char * __restrict__, size_t,
        mbstate_t * __restrict__);
size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbrtowc(wchar_t * __restrict__, const char * __restrict__,
         size_t, mbstate_t * __restrict__);
size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbsrtowcs(wchar_t * __restrict__, const char ** __restrict__,
    size_t, mbstate_t * __restrict__);
size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcrtomb(char * __restrict__, wchar_t,
         mbstate_t * __restrict__);
size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrtombs(char * __restrict__, const wchar_t ** __restrict__,
    size_t, mbstate_t * __restrict__);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wctob(wint_t);
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwide(FILE*, int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbsinit(const mbstate_t*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wmemset(wchar_t *, wchar_t, size_t);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wmemchr(const wchar_t*, wchar_t, size_t);
int wmemcmp(const wchar_t*, const wchar_t *, size_t);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wmemcpy(wchar_t* __restrict__,
           const wchar_t* __restrict__,
    size_t);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wmemmove(wchar_t* s1, const wchar_t *, size_t);
long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstoll(const wchar_t * __restrict__,
     wchar_t** __restrict__, int);
unsigned long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstoull(const wchar_t * __restrict__,
       wchar_t ** __restrict__, int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned long _fsize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct _wfinddata_t {
 unsigned attrib;
 time_t time_create;
 time_t time_access;
 time_t time_write;
 _fsize_t size;
 wchar_t name[260];
};
struct _wfinddatai64_t {
 unsigned attrib;
 time_t time_create;
 time_t time_access;
 time_t time_write;
 long long size;
 wchar_t name[260];
};
#pragma line 406 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stdint.h" 1 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/stdint.h" 1 3 4
#pragma line 24 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/stdint.h" 3 4
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 1 3 4
#pragma line 25 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/stdint.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;
#pragma empty_line
#pragma empty_line
typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
typedef long long int_least64_t;
typedef unsigned long long uint_least64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
typedef long long int_fast64_t;
typedef unsigned long long uint_fast64_t;
#pragma line 66 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/stdint.h" 3 4
  typedef int intptr_t;
#pragma line 75 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/stdint.h" 3 4
  typedef unsigned int uintptr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
#pragma line 4 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stdint.h" 2 3 4
#pragma line 407 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 2 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _waccess (const wchar_t*, int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wchmod (const wchar_t*, int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcreat (const wchar_t*, int);
#pragma empty_line
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfindfirst (const wchar_t*, struct _wfinddata_t *);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfindnext (long, struct _wfinddata_t *);
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wunlink (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wopen (const wchar_t*, int, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsopen (const wchar_t*, int, int, ...);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wmktemp (wchar_t*);
#pragma empty_line
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfindfirsti64 (const wchar_t*, struct _wfinddatai64_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfindnexti64 (long, struct _wfinddatai64_t*);
#pragma line 454 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wchdir (const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wgetcwd (wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wgetdcwd (int, wchar_t*, int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wmkdir (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wrmdir (const wchar_t*);
#pragma line 471 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
struct _stat
{
 _dev_t st_dev;
 _ino_t st_ino;
 _mode_t st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 _dev_t st_rdev;
 _off_t st_size;
 time_t st_atime;
#pragma empty_line
 time_t st_mtime;
 time_t st_ctime;
};
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct stat
{
 dev_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 dev_t st_rdev;
 off_t st_size;
 time_t st_atime;
#pragma empty_line
 time_t st_mtime;
 time_t st_ctime;
};
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct _stati64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    long long st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
};
#pragma line 589 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wstat (const wchar_t*, struct _stat*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wstati64 (const wchar_t*, struct _stati64*);
#pragma line 612 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/wchar.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsetlocale (int, const wchar_t*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexecl (const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexecle (const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexeclp (const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexeclpe (const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexecv (const wchar_t*, const wchar_t* const*);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexecve (const wchar_t*, const wchar_t* const*, const wchar_t* const*);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexecvp (const wchar_t*, const wchar_t* const*);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wexecvpe (const wchar_t*, const wchar_t* const*, const wchar_t* const*);
#pragma empty_line
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnl (int, const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnle (int, const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnlp (int, const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnlpe (int, const wchar_t*, const wchar_t*, ...);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnv (int, const wchar_t*, const wchar_t* const*);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnve (int, const wchar_t*, const wchar_t* const*, const wchar_t* const*);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnvp (int, const wchar_t*, const wchar_t* const*);
 intptr_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wspawnvpe (int, const wchar_t*, const wchar_t* const*, const wchar_t* const*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 47 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 2 3
#pragma line 64 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
namespace std
{
  using ::mbstate_t;
}
#pragma line 137 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
namespace std
{
#pragma empty_line
#pragma empty_line
  using ::wint_t;
#pragma empty_line
  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;
#pragma empty_line
  using ::vfwscanf;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  using ::vswscanf;
#pragma empty_line
  using ::vwprintf;
#pragma empty_line
  using ::vwscanf;
#pragma empty_line
  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;
#pragma empty_line
  using ::wcstof;
#pragma empty_line
  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;
#pragma empty_line
#pragma empty_line
  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }
#pragma empty_line
  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }
#pragma empty_line
  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }
#pragma empty_line
  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }
#pragma empty_line
  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  using ::wcstold;
#pragma line 259 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;
#pragma empty_line
}
#pragma empty_line
namespace std
{
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
}
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 2 3
#pragma line 70 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
namespace std
{
#pragma empty_line
#pragma line 92 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
  typedef long long streamoff;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef ptrdiff_t streamsize;
#pragma line 113 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;
#pragma empty_line
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      fpos()
      : _M_off(0), _M_state() { }
#pragma line 135 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }
#pragma empty_line
#pragma empty_line
      operator streamoff() const { return _M_off; }
#pragma empty_line
#pragma empty_line
      void
      state(_StateT __st)
      { _M_state = __st; }
#pragma empty_line
#pragma empty_line
      _StateT
      state() const
      { return _M_state; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }
#pragma empty_line
  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef fpos<mbstate_t> streampos;
#pragma empty_line
  typedef fpos<mbstate_t> wstreampos;
#pragma line 241 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/postypes.h" 3
#pragma empty_line
}
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iosfwd" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 76 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iosfwd" 3
  class ios_base;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;
#pragma empty_line
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef basic_ios<char> ios;
#pragma empty_line
#pragma empty_line
  typedef basic_streambuf<char> streambuf;
#pragma empty_line
#pragma empty_line
  typedef basic_istream<char> istream;
#pragma empty_line
#pragma empty_line
  typedef basic_ostream<char> ostream;
#pragma empty_line
#pragma empty_line
  typedef basic_iostream<char> iostream;
#pragma empty_line
#pragma empty_line
  typedef basic_stringbuf<char> stringbuf;
#pragma empty_line
#pragma empty_line
  typedef basic_istringstream<char> istringstream;
#pragma empty_line
#pragma empty_line
  typedef basic_ostringstream<char> ostringstream;
#pragma empty_line
#pragma empty_line
  typedef basic_stringstream<char> stringstream;
#pragma empty_line
#pragma empty_line
  typedef basic_filebuf<char> filebuf;
#pragma empty_line
#pragma empty_line
  typedef basic_ifstream<char> ifstream;
#pragma empty_line
#pragma empty_line
  typedef basic_ofstream<char> ofstream;
#pragma empty_line
#pragma empty_line
  typedef basic_fstream<char> fstream;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef basic_ios<wchar_t> wios;
#pragma empty_line
#pragma empty_line
  typedef basic_streambuf<wchar_t> wstreambuf;
#pragma empty_line
#pragma empty_line
  typedef basic_istream<wchar_t> wistream;
#pragma empty_line
#pragma empty_line
  typedef basic_ostream<wchar_t> wostream;
#pragma empty_line
#pragma empty_line
  typedef basic_iostream<wchar_t> wiostream;
#pragma empty_line
#pragma empty_line
  typedef basic_stringbuf<wchar_t> wstringbuf;
#pragma empty_line
#pragma empty_line
  typedef basic_istringstream<wchar_t> wistringstream;
#pragma empty_line
#pragma empty_line
  typedef basic_ostringstream<wchar_t> wostringstream;
#pragma empty_line
#pragma empty_line
  typedef basic_stringstream<wchar_t> wstringstream;
#pragma empty_line
#pragma empty_line
  typedef basic_filebuf<wchar_t> wfilebuf;
#pragma empty_line
#pragma empty_line
  typedef basic_ifstream<wchar_t> wifstream;
#pragma empty_line
#pragma empty_line
  typedef basic_ofstream<wchar_t> wofstream;
#pragma empty_line
#pragma empty_line
  typedef basic_fstream<wchar_t> wfstream;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/exception" 1 3
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/exception" 3
#pragma empty_line
#pragma line 36 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/exception" 3
#pragma empty_line
#pragma GCC visibility push(default)
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C++" {
#pragma empty_line
namespace std
{
#pragma line 61 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
    virtual const char* what() const throw();
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
    virtual ~bad_exception() throw();
#pragma empty_line
#pragma empty_line
    virtual const char* what() const throw();
  };
#pragma empty_line
#pragma empty_line
  typedef void (*terminate_handler) ();
#pragma empty_line
#pragma empty_line
  typedef void (*unexpected_handler) ();
#pragma empty_line
#pragma empty_line
  terminate_handler set_terminate(terminate_handler) throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  void terminate() throw() __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
  unexpected_handler set_unexpected(unexpected_handler) throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  void unexpected() __attribute__ ((__noreturn__));
#pragma line 118 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma line 143 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/exception" 3
  void __verbose_terminate_handler();
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
}
#pragma empty_line
#pragma GCC visibility pop
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 1 3
#pragma line 61 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/functexcept.h" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/functexcept.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/exception_defines.h" 1 3
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/functexcept.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  void
  __throw_bad_exception(void) __attribute__((__noreturn__));
#pragma empty_line
#pragma empty_line
  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));
#pragma empty_line
#pragma empty_line
  void
  __throw_bad_cast(void) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));
#pragma empty_line
#pragma empty_line
  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_length_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_range_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
#pragma empty_line
  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_system_error(int) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_future_error(int) __attribute__((__noreturn__));
#pragma empty_line
#pragma empty_line
  void
  __throw_bad_function_call() __attribute__((__noreturn__));
#pragma empty_line
#pragma empty_line
}
#pragma line 62 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cpp_type_traits.h" 1 3
#pragma line 36 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cpp_type_traits.h" 3
#pragma empty_line
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cpp_type_traits.h" 3
#pragma line 69 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cpp_type_traits.h" 3
namespace __gnu_cxx
{
#pragma empty_line
#pragma empty_line
  template<typename _Iterator, typename _Container>
    class __normal_iterator;
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  struct __true_type { };
  struct __false_type { };
#pragma empty_line
  template<bool>
    struct __truth_type
    { typedef __false_type __type; };
#pragma empty_line
  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma line 199 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma line 422 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cpp_type_traits.h" 3
#pragma empty_line
}
#pragma line 63 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/type_traits.h" 1 3
#pragma line 32 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/type_traits.h" 3
#pragma empty_line
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool, typename>
    struct __enable_if
    { };
#pragma empty_line
  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };
#pragma empty_line
  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };
#pragma empty_line
#pragma empty_line
  template<>
    struct __add_unsigned<bool>;
#pragma empty_line
  template<>
    struct __add_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };
#pragma empty_line
#pragma empty_line
  template<>
    struct __remove_unsigned<bool>;
#pragma empty_line
  template<>
    struct __remove_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };
#pragma empty_line
  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };
#pragma empty_line
  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };
#pragma empty_line
#pragma empty_line
}
#pragma line 64 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/numeric_traits.h" 1 3
#pragma line 32 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/numeric_traits.h" 3
#pragma empty_line
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/numeric_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma line 54 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {
#pragma empty_line
      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);
#pragma empty_line
#pragma empty_line
#pragma empty_line
      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };
#pragma empty_line
  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;
#pragma empty_line
  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;
#pragma empty_line
  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
#pragma line 99 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {
#pragma empty_line
      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);
#pragma empty_line
#pragma empty_line
      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;
#pragma empty_line
  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;
#pragma empty_line
  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };
#pragma empty_line
#pragma empty_line
}
#pragma line 65 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_pair.h" 1 3
#pragma line 60 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_pair.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/move.h" 1 3
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/move.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/concept_check.h" 1 3
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/concept_check.h" 3
#pragma empty_line
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/concept_check.h" 3
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/move.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r)
    {
      return reinterpret_cast<_Tp*>
 (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));
    }
#pragma empty_line
#pragma empty_line
}
#pragma line 109 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/move.h" 3
namespace std
{
#pragma empty_line
#pragma line 120 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }
#pragma empty_line
#pragma empty_line
}
#pragma line 61 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_pair.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 86 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;
#pragma empty_line
      _T1 first;
      _T2 second;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      pair()
      : first(), second() { }
#pragma empty_line
#pragma empty_line
      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
#pragma empty_line
#pragma empty_line
      template<class _U1, class _U2>
 pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }
#pragma line 196 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_pair.h" 3
    };
#pragma empty_line
#pragma empty_line
  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }
#pragma empty_line
#pragma empty_line
  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }
#pragma empty_line
#pragma empty_line
  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }
#pragma empty_line
#pragma empty_line
  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }
#pragma empty_line
#pragma empty_line
  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }
#pragma empty_line
#pragma empty_line
  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
#pragma line 270 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 66 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_types.h" 1 3
#pragma line 63 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_types.h" 3
#pragma empty_line
#pragma line 64 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_types.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 90 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };
#pragma empty_line
#pragma empty_line
  struct output_iterator_tag { };
#pragma empty_line
#pragma empty_line
  struct forward_iterator_tag : public input_iterator_tag { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  struct bidirectional_iterator_tag : public forward_iterator_tag { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
#pragma line 117 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {
#pragma empty_line
      typedef _Category iterator_category;
#pragma empty_line
      typedef _Tp value_type;
#pragma empty_line
      typedef _Distance difference_type;
#pragma empty_line
      typedef _Pointer pointer;
#pragma empty_line
      typedef _Reference reference;
    };
#pragma line 163 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it; }
    };
#pragma empty_line
  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it.base(); }
    };
#pragma empty_line
#pragma empty_line
}
#pragma line 67 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_funcs.h" 1 3
#pragma line 63 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_funcs.h" 3
#pragma empty_line
#pragma line 64 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_funcs.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }
#pragma empty_line
  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      return __last - __first;
    }
#pragma line 111 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {
#pragma empty_line
      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }
#pragma empty_line
  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {
#pragma empty_line
#pragma empty_line
      while (__n--)
 ++__i;
    }
#pragma empty_line
  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }
#pragma empty_line
  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      __i += __n;
    }
#pragma line 169 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {
#pragma empty_line
      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
#pragma line 200 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator_base_funcs.h" 3
#pragma empty_line
}
#pragma line 68 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 1 3
#pragma line 68 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
namespace std
{
#pragma empty_line
#pragma line 96 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator() : current() { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      iterator_type
      base() const
      { return current; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      pointer
      operator->() const
      { return &(operator*()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
#pragma line 283 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
#pragma empty_line
    { return __y.base() - __x.base(); }
#pragma line 395 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
#pragma empty_line
    public:
#pragma empty_line
      typedef _Container container_type;
#pragma empty_line
#pragma empty_line
      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
#pragma line 422 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
#pragma line 445 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
#pragma empty_line
      back_insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
#pragma empty_line
      back_insert_iterator
      operator++(int)
      { return *this; }
    };
#pragma line 471 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
#pragma line 486 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
#pragma empty_line
    public:
#pragma empty_line
      typedef _Container container_type;
#pragma empty_line
#pragma empty_line
      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
#pragma line 512 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
#pragma line 535 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
#pragma empty_line
      front_insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
#pragma empty_line
      front_insert_iterator
      operator++(int)
      { return *this; }
    };
#pragma line 561 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
#pragma line 580 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;
#pragma empty_line
    public:
#pragma empty_line
      typedef _Container container_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
#pragma line 623 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
#pragma line 649 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
#pragma empty_line
      insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
#pragma empty_line
      insert_iterator&
      operator++(int)
      { return *this; }
    };
#pragma line 675 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma line 699 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;
#pragma empty_line
      __normal_iterator() : _M_current(_Iterator()) { }
#pragma empty_line
      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }
#pragma empty_line
#pragma empty_line
      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }
#pragma empty_line
#pragma empty_line
      reference
      operator*() const
      { return *_M_current; }
#pragma empty_line
      pointer
      operator->() const
      { return _M_current; }
#pragma empty_line
      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }
#pragma empty_line
      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }
#pragma empty_line
#pragma empty_line
      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }
#pragma empty_line
      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }
#pragma empty_line
#pragma empty_line
      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }
#pragma empty_line
      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }
#pragma empty_line
      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }
#pragma empty_line
      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }
#pragma empty_line
      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }
#pragma empty_line
      const _Iterator&
      base() const
      { return _M_current; }
    };
#pragma line 797 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }
#pragma empty_line
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
#pragma empty_line
    { return __lhs.base() - __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }
#pragma empty_line
#pragma empty_line
}
#pragma line 69 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/debug/debug.h" 1 3
#pragma line 47 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_debug
{
  using namespace std::__debug;
}
#pragma line 71 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };
#pragma empty_line
  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
#pragma line 116 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
#pragma line 157 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
#pragma line 185 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      if (__b < __a)
 return __b;
      return __a;
    }
#pragma line 208 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      if (__a < __b)
 return __b;
      return __a;
    }
#pragma line 231 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
#pragma empty_line
      if (__comp(__b, __a))
 return __b;
      return __a;
    }
#pragma line 252 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
#pragma empty_line
      if (__comp(__a, __b))
 return __b;
      return __a;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };
#pragma empty_line
  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }
#pragma empty_line
#pragma empty_line
  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };
#pragma empty_line
  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
#pragma line 319 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
#pragma line 357 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };
#pragma empty_line
  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);
#pragma empty_line
      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    struct char_traits;
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);
#pragma empty_line
  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
#pragma line 442 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
#pragma line 494 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
#pragma line 522 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
#pragma line 552 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };
#pragma empty_line
  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);
#pragma empty_line
      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }
#pragma empty_line
  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
#pragma line 611 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
#pragma line 669 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }
#pragma empty_line
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
#pragma line 713 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }
#pragma empty_line
  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __value;
      return __first;
    }
#pragma empty_line
  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __tmp;
      return __first;
    }
#pragma empty_line
  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
#pragma line 773 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }
#pragma empty_line
  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };
#pragma empty_line
  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };
#pragma empty_line
  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);
#pragma empty_line
      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }
#pragma empty_line
#pragma empty_line
  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }
#pragma empty_line
      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };
#pragma empty_line
  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }
#pragma empty_line
      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };
#pragma empty_line
  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };
#pragma empty_line
  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;
#pragma empty_line
 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }
#pragma empty_line
  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };
#pragma empty_line
  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);
#pragma empty_line
      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
#pragma line 934 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      _DistanceType __len = std::distance(__first, __last);
#pragma empty_line
      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }
#pragma empty_line
  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }
#pragma empty_line
  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }
#pragma empty_line
  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1008 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
#pragma line 1040 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
#pragma line 1071 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {
#pragma empty_line
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
      ;
#pragma empty_line
      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
#pragma line 1105 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
      ;
#pragma empty_line
      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
#pragma line 1145 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
#pragma line 1182 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ;
#pragma empty_line
      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
#pragma empty_line
#pragma empty_line
}
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 2 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
#pragma empty_line
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwchar" 3
#pragma line 44 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 2 3
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma line 59 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
#pragma line 84 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;
#pragma empty_line
      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }
#pragma empty_line
      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }
#pragma empty_line
      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }
#pragma empty_line
      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);
#pragma empty_line
      static std::size_t
      length(const char_type* __s);
#pragma empty_line
      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);
#pragma empty_line
      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);
#pragma empty_line
      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);
#pragma empty_line
      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);
#pragma empty_line
      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }
#pragma empty_line
      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }
#pragma empty_line
      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }
#pragma empty_line
      static int_type
      eof()
      { return static_cast<int_type>(-1); }
#pragma empty_line
      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };
#pragma empty_line
  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }
#pragma empty_line
  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }
#pragma empty_line
  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }
#pragma empty_line
  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }
#pragma empty_line
  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
#pragma empty_line
      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }
#pragma empty_line
  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {
#pragma empty_line
      std::fill_n(__s, __n, __a);
      return __s;
    }
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 228 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;
#pragma empty_line
      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }
#pragma empty_line
      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }
#pragma empty_line
      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }
#pragma empty_line
      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }
#pragma empty_line
      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }
#pragma empty_line
      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }
#pragma empty_line
      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }
#pragma empty_line
      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }
#pragma empty_line
      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }
#pragma empty_line
      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }
#pragma empty_line
      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }
#pragma empty_line
      static int_type
      eof()
      { return static_cast<int_type>(-1); }
#pragma empty_line
      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;
#pragma empty_line
      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }
#pragma empty_line
      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }
#pragma empty_line
      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }
#pragma empty_line
      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }
#pragma empty_line
      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }
#pragma empty_line
      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }
#pragma empty_line
      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }
#pragma empty_line
      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }
#pragma empty_line
      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }
#pragma empty_line
      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }
#pragma empty_line
      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }
#pragma empty_line
      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }
#pragma empty_line
      static int_type
      eof()
      { return static_cast<int_type>((wchar_t)(0xFFFF)); }
#pragma empty_line
      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/localefwd.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/localefwd.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/localefwd.h" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++locale.h" 1 3
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++locale.h" 3
#pragma empty_line
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++locale.h" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/clocale" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/clocale" 3
#pragma empty_line
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/clocale" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/locale.h" 1 3
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/locale.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 1 3 4
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/locale.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct lconv
{
 char* decimal_point;
 char* thousands_sep;
 char* grouping;
 char* int_curr_symbol;
 char* currency_symbol;
 char* mon_decimal_point;
 char* mon_thousands_sep;
 char* mon_grouping;
 char* positive_sign;
 char* negative_sign;
 char int_frac_digits;
 char frac_digits;
 char p_cs_precedes;
 char p_sep_by_space;
 char n_cs_precedes;
 char n_sep_by_space;
 char p_sign_posn;
 char n_sign_posn;
};
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setlocale (int, const char*);
 struct lconv* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) localeconv (void);
#pragma line 82 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/locale.h" 3
}
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/clocale" 2 3
#pragma line 53 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/clocale" 3
namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++locale.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  typedef int* __c_locale;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, 0);
    char* __sav = 0;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }
#pragma empty_line
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);
#pragma empty_line
#pragma empty_line
    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    __builtin_va_end(__args);
#pragma empty_line
    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }
#pragma empty_line
#pragma empty_line
}
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/localefwd.h" 2 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 3
#pragma empty_line
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 1 3
#pragma line 20 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/stddef.h" 1 3 4
#pragma line 21 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 2 3
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isalnum(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isalpha(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iscntrl(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isdigit(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isgraph(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) islower(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isprint(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ispunct(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isspace(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isupper(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isxdigit(int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isblank (int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _isctype (int, int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tolower(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) toupper(int);
#pragma line 83 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _tolower(int);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _toupper(int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
   extern __attribute__ ((__dllimport__)) int __mb_cur_max;
#pragma line 112 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
  extern __attribute__ ((__dllimport__)) unsigned short _ctype[];
#pragma empty_line
#pragma empty_line
  extern __attribute__ ((__dllimport__)) unsigned short* _pctype;
#pragma line 192 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswalnum(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswalpha(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswascii(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswcntrl(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswctype(wint_t, wctype_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) is_wctype(wint_t, wctype_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswdigit(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswgraph(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswlower(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswprint(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswpunct(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswspace(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswupper(wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswxdigit(wint_t);
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iswblank (wint_t);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towlower (wint_t);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) towupper (wint_t);
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isleadbyte (int);
#pragma line 246 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __isascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __toascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __iscsymf (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __iscsym (int);
#pragma line 260 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/ctype.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) isascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) toascii (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iscsymf (int);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) iscsym (int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 2 3
#pragma line 64 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/localefwd.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 57 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/localefwd.h" 3
  class locale;
#pragma empty_line
  template<typename _Facet>
    bool
    has_facet(const locale&) throw();
#pragma empty_line
  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    islower(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);
#pragma empty_line
  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);
#pragma empty_line
#pragma empty_line
  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;
#pragma empty_line
  template<> class ctype<wchar_t>;
#pragma empty_line
  template<typename _CharT>
    class ctype_byname;
#pragma empty_line
#pragma empty_line
  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;
#pragma empty_line
  template<> class codecvt<wchar_t, char, mbstate_t>;
#pragma empty_line
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;
#pragma empty_line
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;
#pragma empty_line
#pragma empty_line
  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;
#pragma empty_line
#pragma empty_line
  class money_base;
#pragma empty_line
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
#pragma empty_line
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;
#pragma empty_line
#pragma empty_line
  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;
#pragma empty_line
#pragma empty_line
}
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/atomicity.h" 1 3
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/atomicity.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr.h" 1 3
#pragma line 30 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr.h" 3
#pragma GCC visibility push(default)
#pragma line 162 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 1 3
#pragma line 70 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/errno.h" 1 3
#pragma line 80 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/errno.h" 3
extern "C" {
#pragma line 91 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/../../../../include/errno.h" 3
 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _errno(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 71 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 2 3
#pragma line 340 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
typedef unsigned long __gthread_key_t;
#pragma empty_line
typedef struct {
  int done;
  long started;
} __gthread_once_t;
#pragma empty_line
typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;
#pragma empty_line
typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
#pragma line 374 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
#pragma line 401 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
#pragma empty_line
  return _CRT_MT;
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);
#pragma empty_line
static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}
#pragma empty_line
static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}
#pragma empty_line
static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}
#pragma empty_line
static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}
#pragma empty_line
static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}
#pragma empty_line
static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}
#pragma empty_line
static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}
#pragma empty_line
static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}
#pragma empty_line
static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}
#pragma empty_line
static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}
#pragma empty_line
static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}
#pragma empty_line
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}
#pragma empty_line
static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}
#pragma empty_line
static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}
#pragma line 767 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr-default.h" 3
}
#pragma line 163 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/gthr.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma GCC visibility pop
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/atomicity.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/atomic_word.h" 1 3
#pragma line 32 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/atomic_word.h" 3
typedef int _Atomic_word;
#pragma line 36 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/atomicity.h" 2 3
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma line 54 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/atomicity.h" 3
  _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add(volatile _Atomic_word*, int) throw ();
#pragma empty_line
  void
  __attribute__ ((__unused__))
  __atomic_add(volatile _Atomic_word*, int) throw ();
#pragma empty_line
#pragma empty_line
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }
#pragma empty_line
  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }
#pragma empty_line
  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {
#pragma empty_line
    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  }
#pragma empty_line
  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {
#pragma empty_line
    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  }
#pragma empty_line
#pragma empty_line
}
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 2 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 1 3
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 3
#pragma empty_line
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/allocator.h" 1 3
#pragma line 48 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/allocator.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++allocator.h" 1 3
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++allocator.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/new_allocator.h" 1 3
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/new_allocator.h" 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/new" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/new" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/new" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma GCC visibility push(default)
#pragma empty_line
extern "C++" {
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
    virtual ~bad_alloc() throw();
#pragma empty_line
#pragma empty_line
    virtual const char* what() const throw();
  };
#pragma empty_line
  struct nothrow_t { };
#pragma empty_line
  extern const nothrow_t nothrow;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef void (*new_handler)();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  new_handler set_new_handler(new_handler) throw();
}
#pragma line 93 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();
#pragma empty_line
#pragma empty_line
inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }
#pragma empty_line
#pragma empty_line
inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }
#pragma empty_line
}
#pragma empty_line
#pragma GCC visibility pop
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/new_allocator.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx
{
#pragma empty_line
#pragma empty_line
  using std::size_t;
  using std::ptrdiff_t;
#pragma line 53 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;
#pragma empty_line
      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };
#pragma empty_line
      new_allocator() throw() { }
#pragma empty_line
      new_allocator(const new_allocator&) throw() { }
#pragma empty_line
      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }
#pragma empty_line
      ~new_allocator() throw() { }
#pragma empty_line
      pointer
      address(reference __x) const { return std::__addressof(__x); }
#pragma empty_line
      const_pointer
      address(const_reference __x) const { return std::__addressof(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();
#pragma empty_line
 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }
#pragma empty_line
#pragma empty_line
      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }
#pragma empty_line
      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
#pragma line 117 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }
#pragma empty_line
#pragma empty_line
}
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/c++allocator.h" 2 3
#pragma line 49 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/allocator.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 65 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/allocator.h" 3
  template<typename _Tp>
    class allocator;
#pragma empty_line
#pragma empty_line
  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;
#pragma empty_line
      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
#pragma line 91 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;
#pragma empty_line
      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
#pragma empty_line
      allocator() throw() { }
#pragma empty_line
      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }
#pragma empty_line
      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }
#pragma empty_line
      ~allocator() throw() { }
#pragma empty_line
#pragma empty_line
    };
#pragma empty_line
  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }
#pragma empty_line
  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class allocator<char>;
  extern template class allocator<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };
#pragma empty_line
  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {
#pragma empty_line
 if (__one != __two)
   swap(__one, __two);
      }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };
#pragma empty_line
  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
#pragma line 236 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/allocator.h" 3
#pragma empty_line
}
#pragma line 44 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream_insert.h" 1 3
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream_insert.h" 3
#pragma empty_line
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream_insert.h" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cxxabi_forced.h" 1 3
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cxxabi_forced.h" 3
#pragma empty_line
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/cxxabi_forced.h" 3
#pragma empty_line
#pragma GCC visibility push(default)
#pragma empty_line
#pragma empty_line
namespace __cxxabiv1
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();
#pragma empty_line
#pragma empty_line
    virtual void __pure_dummy() = 0;
  };
}
#pragma empty_line
#pragma empty_line
#pragma GCC visibility pop
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream_insert.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;
#pragma empty_line
      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;
#pragma empty_line
      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;
#pragma empty_line
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);
#pragma empty_line
#pragma empty_line
  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 47 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 1 3
#pragma line 60 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
namespace std
{
#pragma empty_line
#pragma line 101 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
#pragma empty_line
      typedef _Arg argument_type;
#pragma empty_line
#pragma empty_line
      typedef _Result result_type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
#pragma empty_line
      typedef _Arg1 first_argument_type;
#pragma empty_line
#pragma empty_line
      typedef _Arg2 second_argument_type;
#pragma empty_line
#pragma empty_line
      typedef _Result result_type;
    };
#pragma line 140 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
#pragma line 204 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
#pragma line 268 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };
#pragma empty_line
  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };
#pragma empty_line
  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
#pragma line 351 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;
#pragma empty_line
    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }
#pragma empty_line
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }
#pragma empty_line
#pragma empty_line
  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;
#pragma empty_line
    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }
#pragma empty_line
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
#pragma line 422 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);
#pragma empty_line
    public:
      pointer_to_unary_function() { }
#pragma empty_line
      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }
#pragma empty_line
      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);
#pragma empty_line
    public:
      pointer_to_binary_function() { }
#pragma empty_line
      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }
#pragma empty_line
      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }
#pragma empty_line
      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };
#pragma empty_line
  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }
#pragma empty_line
      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
#pragma line 508 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
    };
#pragma empty_line
  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }
#pragma empty_line
      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
#pragma line 541 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)();
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)() const;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)();
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)() const;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/backward/binders.h" 1 3
#pragma line 60 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/backward/binders.h" 3
namespace std
{
#pragma empty_line
#pragma line 99 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;
#pragma empty_line
    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }
#pragma empty_line
      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;
#pragma empty_line
#pragma empty_line
  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }
#pragma empty_line
#pragma empty_line
  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;
#pragma empty_line
    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }
#pragma empty_line
      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;
#pragma empty_line
#pragma empty_line
  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 732 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/stl_function.h" 2 3
#pragma line 51 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/range_access.h" 1 3
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/range_access.h" 3
#pragma empty_line
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/range_access.h" 3
#pragma line 54 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/initializer_list" 1 3
#pragma line 33 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/initializer_list" 3
#pragma empty_line
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/initializer_list" 3
#pragma line 44 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 106 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;
#pragma empty_line
#pragma empty_line
    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
#pragma empty_line
    private:
#pragma line 143 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };
#pragma empty_line
      struct _Rep : _Rep_base
      {
#pragma empty_line
 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
#pragma line 168 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;
#pragma empty_line
#pragma empty_line
#pragma empty_line
        static size_type _S_empty_rep_storage[];
#pragma empty_line
        static _Rep&
        _S_empty_rep()
        {
#pragma empty_line
#pragma empty_line
#pragma empty_line
   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }
#pragma empty_line
        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }
#pragma empty_line
        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }
#pragma empty_line
        void
 _M_set_leaked()
        { this->_M_refcount = -1; }
#pragma empty_line
        void
 _M_set_sharable()
        { this->_M_refcount = 0; }
#pragma empty_line
 void
 _M_set_length_and_sharable(size_type __n)
 {
#pragma empty_line
   if (__builtin_expect(this != &_S_empty_rep(), false))
#pragma empty_line
     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);
#pragma empty_line
#pragma empty_line
     }
 }
#pragma empty_line
 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }
#pragma empty_line
 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }
#pragma empty_line
#pragma empty_line
 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);
#pragma empty_line
 void
 _M_dispose(const _Alloc& __a)
 {
#pragma empty_line
   if (__builtin_expect(this != &_S_empty_rep(), false))
#pragma empty_line
     {
#pragma empty_line
       ;
       if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
        -1) <= 0)
  {
    ;
    _M_destroy(__a);
  }
     }
 }
#pragma empty_line
 void
 _M_destroy(const _Alloc&) throw();
#pragma empty_line
 _CharT*
 _M_refcopy() throw()
 {
#pragma empty_line
   if (__builtin_expect(this != &_S_empty_rep(), false))
#pragma empty_line
            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }
#pragma empty_line
 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };
#pragma empty_line
#pragma empty_line
      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }
#pragma empty_line
 _CharT* _M_p;
      };
#pragma empty_line
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      static const size_type npos = static_cast<size_type>(-1);
#pragma empty_line
    private:
#pragma empty_line
      mutable _Alloc_hider _M_dataplus;
#pragma empty_line
      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }
#pragma empty_line
      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }
#pragma empty_line
      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }
#pragma empty_line
      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }
#pragma empty_line
      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }
#pragma empty_line
      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }
#pragma empty_line
      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }
#pragma empty_line
#pragma empty_line
      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }
#pragma empty_line
#pragma empty_line
      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }
#pragma empty_line
      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }
#pragma empty_line
      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }
#pragma empty_line
      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }
#pragma empty_line
      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }
#pragma empty_line
      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }
#pragma empty_line
      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }
#pragma empty_line
      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);
#pragma empty_line
 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }
#pragma empty_line
      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);
#pragma empty_line
      void
      _M_leak_hard();
#pragma empty_line
      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }
#pragma empty_line
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string()
#pragma empty_line
      : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc()) { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      explicit
      basic_string(const _Alloc& __a);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string(const basic_string& __str);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
#pragma line 478 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
#pragma line 526 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
#pragma line 559 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
#pragma line 599 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const_iterator
      begin() const
      { return const_iterator(_M_data()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
#pragma line 705 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      size_type
      size() const
      { return _M_rep()->_M_length; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      size_type
      length() const
      { return _M_rep()->_M_length; }
#pragma empty_line
#pragma empty_line
      size_type
      max_size() const
      { return _Rep::_S_max_size; }
#pragma line 734 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
#pragma line 747 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
#pragma line 767 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
#pragma line 788 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      clear()
      { _M_mutate(0, this->size(), 0); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      bool
      empty() const
      { return this->size() == 0; }
#pragma line 817 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
 ;
 return _M_data()[__pos];
      }
#pragma line 834 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {
#pragma empty_line
 ;
#pragma empty_line
 ;
 _M_leak();
 return _M_data()[__pos];
      }
#pragma line 855 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
#pragma line 908 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
#pragma line 964 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
#pragma line 979 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      append(const _CharT* __s, size_type __n);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      append(const _CharT* __s)
      {
 ;
 return this->append(__s, traits_type::length(__s));
      }
#pragma line 1011 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
#pragma line 1033 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      assign(const basic_string& __str);
#pragma line 1089 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
#pragma line 1105 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
#pragma line 1117 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return this->assign(__s, traits_type::length(__s));
      }
#pragma line 1133 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
#pragma line 1145 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
#pragma line 1173 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
#pragma line 1188 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
#pragma line 1219 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
#pragma line 1241 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
#pragma line 1264 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
#pragma line 1282 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
#pragma line 1305 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
#pragma line 1322 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
#pragma line 1346 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
#pragma line 1362 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {
#pragma empty_line
                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
#pragma line 1382 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
#pragma line 1401 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
#pragma line 1423 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
#pragma line 1447 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
#pragma line 1466 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
#pragma line 1489 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
#pragma line 1507 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
#pragma line 1525 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {
#pragma empty_line
                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
#pragma line 1546 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
#pragma line 1567 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {
#pragma empty_line
                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
#pragma line 1589 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
#pragma empty_line
                            ;
   ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {
#pragma empty_line
                          ;
 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }
#pragma empty_line
      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {
#pragma empty_line
                          ;
 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }
#pragma empty_line
      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {
#pragma empty_line
                          ;
 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
#pragma empty_line
      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {
#pragma empty_line
                          ;
 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
#pragma line 1664 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }
#pragma empty_line
      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);
#pragma empty_line
      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);
#pragma empty_line
      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);
#pragma empty_line
#pragma empty_line
#pragma empty_line
      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct_aux_2(static_cast<size_type>(__beg),
        __end, __a); }
#pragma empty_line
      static _CharT*
      _S_construct_aux_2(size_type __req, _CharT __c, const _Alloc& __a)
      { return _S_construct(__req, __c, __a); }
#pragma empty_line
      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }
#pragma empty_line
#pragma empty_line
      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);
#pragma empty_line
#pragma empty_line
#pragma empty_line
      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);
#pragma empty_line
      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);
#pragma empty_line
    public:
#pragma line 1745 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
#pragma line 1755 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      void
      swap(basic_string& __s);
#pragma line 1765 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const _CharT*
      data() const
      { return _M_data(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      allocator_type
      get_allocator() const
      { return _M_dataplus; }
#pragma line 1797 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
#pragma line 1810 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
#pragma line 1824 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
#pragma line 1841 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
#pragma line 1854 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
#pragma line 1869 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
#pragma line 1882 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
#pragma line 1899 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
#pragma line 1912 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
#pragma line 1927 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
#pragma line 1940 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
#pragma line 1959 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
#pragma line 1973 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
#pragma line 1988 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
#pragma line 2001 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
#pragma line 2020 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
#pragma line 2034 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
#pragma line 2049 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
#pragma line 2063 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
#pragma line 2080 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
#pragma line 2093 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
#pragma line 2109 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
#pragma line 2122 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
#pragma line 2139 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
#pragma line 2154 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
#pragma line 2172 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);
#pragma empty_line
 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
#pragma line 2202 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
#pragma line 2226 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
#pragma line 2244 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
#pragma line 2267 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
#pragma line 2292 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
#pragma line 2304 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
#pragma line 2425 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }
#pragma empty_line
  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
#pragma line 2471 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
#pragma line 2508 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
#pragma line 2545 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
#pragma line 2582 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
#pragma line 2619 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
#pragma line 2656 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
#pragma line 2673 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);
#pragma empty_line
  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
#pragma line 2691 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {
#pragma empty_line
#pragma empty_line
      return __ostream_insert(__os, __str.data(), __str.size());
    }
#pragma line 2714 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
#pragma line 2732 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }
#pragma empty_line
  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);
#pragma empty_line
#pragma empty_line
  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 55 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.tcc" 1 3
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.tcc" 3
#pragma empty_line
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.tcc" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {
#pragma empty_line
 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();
#pragma empty_line
#pragma empty_line
 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 try
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {
#pragma empty_line
      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {
#pragma empty_line
 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();
#pragma empty_line
#pragma empty_line
 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   __throw_logic_error(("basic_string::_S_construct null not valid"));
#pragma empty_line
 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));
#pragma empty_line
 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 try
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {
#pragma empty_line
      if (__n == 0 && __a == _Alloc())
 return _S_empty_rep()._M_refdata();
#pragma empty_line
#pragma empty_line
      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);
#pragma empty_line
      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
#pragma line 242 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {
#pragma empty_line
   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
      ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {
#pragma empty_line
   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
      ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }
#pragma empty_line
   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
       ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {
#pragma empty_line
           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }
#pragma empty_line
   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {
#pragma empty_line
                           ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }
#pragma empty_line
   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
       ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {
#pragma empty_line
    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {
#pragma empty_line
    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {
#pragma empty_line
      if (_M_rep() == &_S_empty_rep())
 return;
#pragma empty_line
      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;
#pragma empty_line
      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {
#pragma empty_line
   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);
#pragma empty_line
   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);
#pragma empty_line
   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {
#pragma empty_line
   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {
#pragma empty_line
   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }
#pragma empty_line
      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {
#pragma empty_line
#pragma empty_line
      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
#pragma line 579 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
#pragma empty_line
      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);
#pragma empty_line
   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      __p->_M_set_sharable();
      return __p;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {
#pragma empty_line
      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);
#pragma empty_line
      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);
#pragma empty_line
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);
#pragma empty_line
      return __n;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();
#pragma empty_line
      if (__n == 0)
 return __pos <= __size ? __pos : npos;
#pragma empty_line
      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;
#pragma empty_line
      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {
#pragma empty_line
       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();
#pragma empty_line
       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);
#pragma empty_line
       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {
#pragma empty_line
#pragma empty_line
#pragma empty_line
       __in._M_setstate(__ios_base::badbit);
     }
 }
#pragma empty_line
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
#pragma empty_line
      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();
#pragma empty_line
       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
#pragma empty_line
       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {
#pragma empty_line
#pragma empty_line
#pragma empty_line
       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);
#pragma empty_line
#pragma empty_line
  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 56 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/string" 2 3
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 2 3
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 64 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
  class locale
  {
  public:
#pragma empty_line
#pragma empty_line
    typedef int category;
#pragma empty_line
#pragma empty_line
    class facet;
    class id;
    class _Impl;
#pragma empty_line
    friend class facet;
    friend class _Impl;
#pragma empty_line
    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();
#pragma empty_line
    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);
#pragma empty_line
    template<typename _Cache>
      friend struct __use_cache;
#pragma line 100 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
#pragma line 119 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    locale() throw();
#pragma line 128 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    locale(const locale& __other) throw();
#pragma line 138 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
#pragma line 153 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
#pragma line 166 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
#pragma line 178 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);
#pragma empty_line
#pragma empty_line
    ~locale() throw();
#pragma line 192 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
#pragma line 207 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    string
    name() const;
#pragma line 226 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
#pragma line 254 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
#pragma line 270 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    static locale
    global(const locale&);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const locale&
    classic();
#pragma empty_line
  private:
#pragma empty_line
    _Impl* _M_impl;
#pragma empty_line
#pragma empty_line
    static _Impl* _S_classic;
#pragma empty_line
#pragma empty_line
    static _Impl* _S_global;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const char* const* const _S_categories;
#pragma line 305 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 0 };
#pragma empty_line
#pragma empty_line
    static __gthread_once_t _S_once;
#pragma empty_line
#pragma empty_line
    explicit
    locale(_Impl*) throw();
#pragma empty_line
    static void
    _S_initialize();
#pragma empty_line
    static void
    _S_initialize_once() throw();
#pragma empty_line
    static category
    _S_normalize_category(category);
#pragma empty_line
    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
#pragma line 339 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;
#pragma empty_line
    mutable _Atomic_word _M_refcount;
#pragma empty_line
#pragma empty_line
    static __c_locale _S_c_locale;
#pragma empty_line
#pragma empty_line
    static const char _S_c_name[2];
#pragma empty_line
#pragma empty_line
    static __gthread_once_t _S_once;
#pragma empty_line
#pragma empty_line
    static void
    _S_initialize_once();
#pragma empty_line
  protected:
#pragma line 370 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }
#pragma empty_line
#pragma empty_line
    virtual
    ~facet();
#pragma empty_line
    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);
#pragma empty_line
    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();
#pragma empty_line
    static void
    _S_destroy_c_locale(__c_locale& __cloc);
#pragma empty_line
    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static __c_locale
    _S_get_c_locale();
#pragma empty_line
    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();
#pragma empty_line
  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }
#pragma empty_line
    void
    _M_remove_reference() const throw()
    {
#pragma empty_line
      ;
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
          ;
   try
     { delete this; }
   catch(...)
     { }
 }
    }
#pragma empty_line
    facet(const facet&);
#pragma empty_line
    facet&
    operator=(const facet&);
  };
#pragma line 437 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;
#pragma empty_line
    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);
#pragma empty_line
    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    mutable size_t _M_index;
#pragma empty_line
#pragma empty_line
    static _Atomic_word _S_refcount;
#pragma empty_line
    void
    operator=(const id&);
#pragma empty_line
    id(const id&);
#pragma empty_line
  public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
    id() { }
#pragma empty_line
    size_t
    _M_id() const throw();
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  class locale::_Impl
  {
  public:
#pragma empty_line
    friend class locale;
    friend class locale::facet;
#pragma empty_line
    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();
#pragma empty_line
    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);
#pragma empty_line
    template<typename _Cache>
      friend struct __use_cache;
#pragma empty_line
  private:
#pragma empty_line
    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];
#pragma empty_line
    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }
#pragma empty_line
    void
    _M_remove_reference() throw()
    {
#pragma empty_line
      ;
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
          ;
   try
     { delete this; }
   catch(...)
     { }
 }
    }
#pragma empty_line
    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();
#pragma empty_line
   ~_Impl() throw();
#pragma empty_line
    _Impl(const _Impl&);
#pragma empty_line
    void
    operator=(const _Impl&);
#pragma empty_line
    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])
#pragma empty_line
 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }
#pragma empty_line
    void
    _M_replace_categories(const _Impl*, category);
#pragma empty_line
    void
    _M_replace_category(const _Impl*, const locale::id* const*);
#pragma empty_line
    void
    _M_replace_facet(const _Impl*, const locale::id*);
#pragma empty_line
    void
    _M_install_facet(const locale::id*, const facet*);
#pragma empty_line
    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }
#pragma empty_line
    void
    _M_install_cache(const facet*, size_t);
  };
#pragma line 583 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
#pragma line 600 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
#pragma line 617 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;
#pragma empty_line
#pragma empty_line
    protected:
#pragma empty_line
#pragma empty_line
      __c_locale _M_c_locale_collate;
#pragma empty_line
    public:
#pragma empty_line
      static locale::id id;
#pragma line 644 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
#pragma line 658 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
#pragma line 675 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
#pragma line 694 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
#pragma line 708 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }
#pragma empty_line
#pragma empty_line
      int
      _M_compare(const _CharT*, const _CharT*) const throw();
#pragma empty_line
      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();
#pragma empty_line
  protected:
#pragma empty_line
      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
#pragma line 737 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
#pragma line 753 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
#pragma line 766 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };
#pragma empty_line
  template<typename _CharT>
    locale::id collate<_CharT>::id;
#pragma empty_line
#pragma empty_line
  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();
#pragma empty_line
  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();
#pragma empty_line
#pragma empty_line
  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();
#pragma empty_line
  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;
#pragma empty_line
#pragma empty_line
      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }
#pragma empty_line
    protected:
      virtual
      ~collate_byname() { }
    };
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.tcc" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.tcc" 3
#pragma empty_line
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.tcc" 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);
#pragma empty_line
      try
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      catch(...)
 {
   _M_impl->_M_remove_reference();
   throw;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }
#pragma empty_line
  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      catch(...)
 {
   __tmp->_M_remove_reference();
   throw;
 }
      return locale(__tmp);
    }
#pragma empty_line
  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }
#pragma empty_line
#pragma empty_line
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size
#pragma empty_line
       && dynamic_cast<const _Facet*>(__facets[__i]));
#pragma empty_line
#pragma empty_line
#pragma empty_line
    }
#pragma empty_line
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();
#pragma empty_line
      return dynamic_cast<const _Facet&>(*__facets[__i]);
#pragma empty_line
#pragma empty_line
#pragma empty_line
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }
#pragma empty_line
  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {
#pragma empty_line
#pragma empty_line
      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);
#pragma empty_line
      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;
#pragma empty_line
   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;
#pragma empty_line
   __p++;
   __q++;
 }
    }
#pragma empty_line
  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;
#pragma empty_line
#pragma empty_line
      const string_type __str(__lo, __hi);
#pragma empty_line
      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();
#pragma empty_line
      size_t __len = (__hi - __lo) * 2;
#pragma empty_line
      _CharT* __c = new _CharT[__len];
#pragma empty_line
      try
 {
#pragma empty_line
#pragma empty_line
#pragma empty_line
   for (;;)
     {
#pragma empty_line
       size_t __res = _M_transform(__c, __p, __len);
#pragma empty_line
#pragma empty_line
       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }
#pragma empty_line
       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;
#pragma empty_line
       __p++;
       __ret.push_back(_CharT());
     }
 }
      catch(...)
 {
   delete [] __c;
   throw;
 }
#pragma empty_line
      delete [] __c;
#pragma empty_line
      return __ret;
    }
#pragma empty_line
  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class collate<char>;
  extern template class collate_byname<char>;
#pragma empty_line
  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<collate<char> >(const locale&);
#pragma empty_line
#pragma empty_line
  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;
#pragma empty_line
  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 824 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_classes.h" 2 3
#pragma line 44 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };
#pragma empty_line
  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }
#pragma empty_line
  inline const _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }
#pragma empty_line
  inline const _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }
#pragma empty_line
  inline const _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }
#pragma empty_line
#pragma empty_line
  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };
#pragma empty_line
  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }
#pragma empty_line
  inline const _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }
#pragma empty_line
  inline const _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }
#pragma empty_line
  inline const _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }
#pragma empty_line
#pragma empty_line
  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };
#pragma empty_line
  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }
#pragma empty_line
  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }
#pragma empty_line
  inline const _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }
#pragma empty_line
  inline const _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }
#pragma empty_line
  inline const _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }
#pragma empty_line
#pragma empty_line
  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
#pragma line 201 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
  class ios_base
  {
  public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    class failure : public exception
    {
    public:
#pragma empty_line
#pragma empty_line
      explicit
      failure(const string& __str) throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual
      ~failure() throw();
#pragma empty_line
      virtual const char*
      what() const throw();
#pragma empty_line
    private:
      string _M_msg;
    };
#pragma line 257 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;
#pragma empty_line
#pragma empty_line
    static const fmtflags boolalpha = _S_boolalpha;
#pragma empty_line
#pragma empty_line
    static const fmtflags dec = _S_dec;
#pragma empty_line
#pragma empty_line
    static const fmtflags fixed = _S_fixed;
#pragma empty_line
#pragma empty_line
    static const fmtflags hex = _S_hex;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const fmtflags internal = _S_internal;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const fmtflags left = _S_left;
#pragma empty_line
#pragma empty_line
    static const fmtflags oct = _S_oct;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const fmtflags right = _S_right;
#pragma empty_line
#pragma empty_line
    static const fmtflags scientific = _S_scientific;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const fmtflags showbase = _S_showbase;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const fmtflags showpoint = _S_showpoint;
#pragma empty_line
#pragma empty_line
    static const fmtflags showpos = _S_showpos;
#pragma empty_line
#pragma empty_line
    static const fmtflags skipws = _S_skipws;
#pragma empty_line
#pragma empty_line
    static const fmtflags unitbuf = _S_unitbuf;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const fmtflags uppercase = _S_uppercase;
#pragma empty_line
#pragma empty_line
    static const fmtflags adjustfield = _S_adjustfield;
#pragma empty_line
#pragma empty_line
    static const fmtflags basefield = _S_basefield;
#pragma empty_line
#pragma empty_line
    static const fmtflags floatfield = _S_floatfield;
#pragma line 332 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const iostate badbit = _S_badbit;
#pragma empty_line
#pragma empty_line
    static const iostate eofbit = _S_eofbit;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const iostate failbit = _S_failbit;
#pragma empty_line
#pragma empty_line
    static const iostate goodbit = _S_goodbit;
#pragma line 363 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;
#pragma empty_line
#pragma empty_line
    static const openmode app = _S_app;
#pragma empty_line
#pragma empty_line
    static const openmode ate = _S_ate;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const openmode binary = _S_bin;
#pragma empty_line
#pragma empty_line
    static const openmode in = _S_in;
#pragma empty_line
#pragma empty_line
    static const openmode out = _S_out;
#pragma empty_line
#pragma empty_line
    static const openmode trunc = _S_trunc;
#pragma line 395 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;
#pragma empty_line
#pragma empty_line
    static const seekdir beg = _S_beg;
#pragma empty_line
#pragma empty_line
    static const seekdir cur = _S_cur;
#pragma empty_line
#pragma empty_line
    static const seekdir end = _S_end;
#pragma empty_line
#pragma empty_line
    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;
#pragma empty_line
    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
#pragma line 421 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
#pragma line 438 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
#pragma line 450 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);
#pragma empty_line
  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    struct _Callback_list
    {
#pragma empty_line
      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;
#pragma empty_line
      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }
#pragma empty_line
      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }
#pragma empty_line
#pragma empty_line
      int
      _M_remove_reference()
      {
#pragma empty_line
        ;
        int __res = __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1);
        if (__res == 0)
          {
            ;
          }
        return __res;
      }
    };
#pragma empty_line
     _Callback_list* _M_callbacks;
#pragma empty_line
    void
    _M_call_callbacks(event __ev) throw();
#pragma empty_line
    void
    _M_dispose_callbacks(void) throw();
#pragma empty_line
#pragma empty_line
    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };
#pragma empty_line
#pragma empty_line
    _Words _M_word_zero;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];
#pragma empty_line
#pragma empty_line
    int _M_word_size;
    _Words* _M_word;
#pragma empty_line
    _Words&
    _M_grow_words(int __index, bool __iword);
#pragma empty_line
#pragma empty_line
    locale _M_ios_locale;
#pragma empty_line
    void
    _M_init() throw();
#pragma empty_line
  public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();
#pragma empty_line
    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    fmtflags
    flags() const
    { return _M_flags; }
#pragma line 563 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
#pragma line 579 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
#pragma line 596 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
#pragma line 622 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    streamsize
    width() const
    { return _M_width; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
#pragma line 673 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
#pragma line 685 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    locale
    imbue(const locale& __loc) throw();
#pragma line 696 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
#pragma line 707 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
#pragma line 726 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    static int
    xalloc() throw();
#pragma line 742 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
#pragma line 763 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
#pragma line 780 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ios_base.h" 3
    virtual ~ios_base();
#pragma empty_line
  protected:
    ios_base() throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  private:
    ios_base(const ios_base&);
#pragma empty_line
    ios_base&
    operator=(const ios_base&);
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }
#pragma empty_line
#pragma empty_line
}
#pragma line 44 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
#pragma empty_line
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
#pragma line 46 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
#pragma line 116 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef basic_streambuf<char_type, traits_type> __streambuf_type;
#pragma empty_line
#pragma empty_line
      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;
#pragma empty_line
      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);
#pragma empty_line
      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);
#pragma empty_line
      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);
#pragma empty_line
      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);
#pragma empty_line
      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);
#pragma empty_line
      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);
#pragma empty_line
    protected:
#pragma line 182 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;
#pragma empty_line
#pragma empty_line
      locale _M_buf_locale;
#pragma empty_line
  public:
#pragma empty_line
      virtual
      ~basic_streambuf()
      { }
#pragma line 206 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
#pragma line 223 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
#pragma line 236 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }
#pragma empty_line
      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }
#pragma empty_line
      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }
#pragma empty_line
      int
      pubsync() { return this->sync(); }
#pragma line 263 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
#pragma line 277 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
#pragma line 295 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
#pragma line 317 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
#pragma line 336 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
#pragma line 351 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
#pragma line 376 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
#pragma line 403 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
#pragma line 429 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }
#pragma empty_line
    protected:
#pragma line 443 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
#pragma line 461 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }
#pragma empty_line
      char_type*
      gptr() const { return _M_in_cur; }
#pragma empty_line
      char_type*
      egptr() const { return _M_in_end; }
#pragma line 477 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
#pragma line 488 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
#pragma line 508 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }
#pragma empty_line
      char_type*
      pptr() const { return _M_out_cur; }
#pragma empty_line
      char_type*
      epptr() const { return _M_out_end; }
#pragma line 524 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
#pragma line 534 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
#pragma line 555 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual void
      imbue(const locale&)
      { }
#pragma line 570 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
#pragma line 581 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
#pragma line 593 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
#pragma line 606 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual int
      sync() { return 0; }
#pragma line 628 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
#pragma line 644 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
#pragma line 666 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
#pragma line 679 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
#pragma line 703 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
#pragma line 721 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
#pragma line 747 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
    public:
#pragma line 762 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      __safe_gbump(streamsize __n) { _M_in_cur += __n; }
#pragma empty_line
      void
      __safe_pbump(streamsize __n) { _M_out_cur += __n; }
#pragma empty_line
    private:
#pragma empty_line
#pragma empty_line
      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }
#pragma empty_line
      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };
#pragma empty_line
#pragma empty_line
  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);
#pragma empty_line
  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf.tcc" 1 3
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf.tcc" 3
#pragma empty_line
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf.tcc" 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->__safe_gbump(__len);
     }
#pragma empty_line
   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->__safe_pbump(__len);
     }
#pragma empty_line
   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);
#pragma empty_line
#pragma empty_line
  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 809 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/streambuf" 2 3
#pragma line 45 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 1 3
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
#pragma empty_line
#pragma line 36 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwctype" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwctype" 3
#pragma empty_line
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwctype" 3
#pragma line 82 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cwctype" 3
namespace std
{
  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;
#pragma empty_line
  using ::iswalnum;
  using ::iswalpha;
#pragma empty_line
  using ::iswblank;
#pragma empty_line
  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;
}
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 1 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 3
#pragma empty_line
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/cctype" 3
#pragma line 43 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/ctype_base.h" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/ctype_base.h" 3
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  struct ctype_base
  {
#pragma empty_line
    typedef const int* __to_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    typedef unsigned short mask;
    static const mask upper = 1 << 0;
    static const mask lower = 1 << 1;
    static const mask alpha = 1 << 2;
    static const mask digit = 1 << 3;
    static const mask xdigit = 1 << 4;
    static const mask space = 1 << 5;
    static const mask print = 1 << 6;
    static const mask graph = (1 << 2) | (1 << 3) | (1 << 9);
    static const mask cntrl = 1 << 8;
    static const mask punct = 1 << 9;
    static const mask alnum = (1 << 2) | (1 << 3);
  };
#pragma empty_line
#pragma empty_line
}
#pragma line 44 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf_iterator.h" 1 3
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf_iterator.h" 3
#pragma empty_line
#pragma line 36 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf_iterator.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 51 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/streambuf_iterator.h" 3
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;
#pragma empty_line
#pragma empty_line
      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);
#pragma empty_line
      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);
#pragma empty_line
      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);
#pragma empty_line
    private:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;
#pragma empty_line
    public:
#pragma empty_line
      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }
#pragma empty_line
#pragma empty_line
      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }
#pragma empty_line
#pragma empty_line
      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      char_type
      operator*() const
      {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 return traits_type::to_char_type(_M_get());
      }
#pragma empty_line
#pragma empty_line
      istreambuf_iterator&
      operator++()
      {
#pragma empty_line
#pragma empty_line
                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }
#pragma empty_line
#pragma empty_line
      istreambuf_iterator
      operator++(int)
      {
#pragma empty_line
#pragma empty_line
                        ;
#pragma empty_line
 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }
#pragma empty_line
    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }
#pragma empty_line
      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;
#pragma empty_line
#pragma empty_line
      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);
#pragma empty_line
    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;
#pragma empty_line
    public:
#pragma empty_line
      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }
#pragma empty_line
#pragma empty_line
      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }
#pragma empty_line
#pragma empty_line
      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }
#pragma empty_line
#pragma empty_line
      ostreambuf_iterator&
      operator*()
      { return *this; }
#pragma empty_line
#pragma empty_line
      ostreambuf_iterator&
      operator++(int)
      { return *this; }
#pragma empty_line
#pragma empty_line
      ostreambuf_iterator&
      operator++()
      { return *this; }
#pragma empty_line
#pragma empty_line
      bool
      failed() const throw()
      { return _M_failed; }
#pragma empty_line
      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;
#pragma empty_line
      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->__safe_gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }
#pragma empty_line
  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;
#pragma empty_line
      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->__safe_gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }
#pragma empty_line
   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 51 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 66 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();
#pragma empty_line
#pragma empty_line
  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();
#pragma empty_line
  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();
#pragma empty_line
  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
#pragma line 144 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
#pragma line 162 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
#pragma line 179 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
#pragma line 195 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
#pragma line 211 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
#pragma line 225 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
#pragma line 240 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
#pragma line 254 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
#pragma line 269 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
#pragma line 286 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
#pragma line 305 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
#pragma line 324 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
#pragma line 346 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }
#pragma empty_line
    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }
#pragma empty_line
      virtual
      ~__ctype_abstract_base() { }
#pragma line 371 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
#pragma line 390 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
#pragma line 409 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
#pragma line 428 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
#pragma line 446 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
#pragma line 463 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
#pragma line 479 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
#pragma line 496 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
#pragma line 515 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
#pragma line 536 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
#pragma line 558 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
#pragma line 582 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
#pragma line 605 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;
#pragma empty_line
#pragma empty_line
      static locale::id id;
#pragma empty_line
      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }
#pragma empty_line
   protected:
      virtual
      ~ctype();
#pragma empty_line
      virtual bool
      do_is(mask __m, char_type __c) const;
#pragma empty_line
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
#pragma empty_line
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
#pragma empty_line
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
#pragma empty_line
      virtual char_type
      do_toupper(char_type __c) const;
#pragma empty_line
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
#pragma empty_line
      virtual char_type
      do_tolower(char_type __c) const;
#pragma empty_line
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
#pragma empty_line
      virtual char_type
      do_widen(char __c) const;
#pragma empty_line
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
#pragma empty_line
      virtual char
      do_narrow(char_type, char __dfault) const;
#pragma empty_line
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };
#pragma empty_line
  template<typename _CharT>
    locale::id ctype<_CharT>::id;
#pragma line 674 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:
#pragma empty_line
#pragma empty_line
      typedef char char_type;
#pragma empty_line
    protected:
#pragma empty_line
      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;
#pragma empty_line
#pragma empty_line
    public:
#pragma empty_line
      static locale::id id;
#pragma empty_line
      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
#pragma line 711 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
#pragma line 724 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
#pragma line 737 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
#pragma line 752 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
#pragma line 766 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
#pragma line 780 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
#pragma line 795 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
#pragma line 812 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
#pragma line 828 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
#pragma line 845 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
#pragma line 865 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
#pragma line 892 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
#pragma line 923 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
#pragma line 956 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const mask*
      table() const throw()
      { return _M_table; }
#pragma empty_line
#pragma empty_line
      static const mask*
      classic_table() throw();
    protected:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual
      ~ctype();
#pragma line 1005 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
#pragma line 1022 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
#pragma line 1038 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
#pragma line 1055 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
#pragma line 1075 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
#pragma line 1098 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
#pragma line 1124 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
#pragma line 1150 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
#pragma empty_line
    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
#pragma line 1175 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:
#pragma empty_line
#pragma empty_line
      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;
#pragma empty_line
    protected:
      __c_locale _M_c_locale_ctype;
#pragma empty_line
#pragma empty_line
      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];
#pragma empty_line
#pragma empty_line
      mask _M_bit[16];
      __wmask_type _M_wmask[16];
#pragma empty_line
    public:
#pragma empty_line
#pragma empty_line
      static locale::id id;
#pragma line 1208 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
#pragma line 1219 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);
#pragma empty_line
    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();
#pragma empty_line
#pragma empty_line
      virtual
      ~ctype();
#pragma line 1243 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
#pragma line 1262 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
#pragma line 1280 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
#pragma line 1298 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
#pragma line 1315 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
#pragma line 1332 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
#pragma line 1348 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
#pragma line 1365 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
#pragma line 1385 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
#pragma line 1407 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
#pragma line 1430 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
#pragma line 1456 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
#pragma empty_line
#pragma empty_line
      void
      _M_initialize_ctype() throw();
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;
#pragma empty_line
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);
#pragma empty_line
    protected:
      virtual
      ~ctype_byname() { };
    };
#pragma empty_line
#pragma empty_line
  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);
#pragma empty_line
    protected:
      virtual
      ~ctype_byname();
    };
#pragma empty_line
#pragma empty_line
  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);
#pragma empty_line
    protected:
      virtual
      ~ctype_byname();
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/ctype_inline.h" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/mingw32/bits/ctype_inline.h" 3
namespace std
{
#pragma empty_line
#pragma empty_line
  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return (_M_table[static_cast<unsigned char>(__c) ] & __m); }
#pragma empty_line
#pragma empty_line
  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }
#pragma empty_line
  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }
#pragma empty_line
  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }
#pragma empty_line
#pragma empty_line
}
#pragma line 1513 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  class __num_base
  {
  public:
#pragma empty_line
#pragma empty_line
    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const char* _S_atoms_out;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static const char* _S_atoms_in;
#pragma empty_line
    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };
#pragma empty_line
  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      _CharT _M_atoms_out[__num_base::_S_oend];
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      _CharT _M_atoms_in[__num_base::_S_iend];
#pragma empty_line
      bool _M_allocated;
#pragma empty_line
      __numpunct_cache(size_t __refs = 0)
      : facet(__refs), _M_grouping(0), _M_grouping_size(0),
 _M_use_grouping(false),
 _M_truename(0), _M_truename_size(0), _M_falsename(0),
 _M_falsename_size(0), _M_decimal_point(_CharT()),
 _M_thousands_sep(_CharT()), _M_allocated(false)
        { }
#pragma empty_line
      ~__numpunct_cache();
#pragma empty_line
      void
      _M_cache(const locale& __loc);
#pragma empty_line
    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);
#pragma empty_line
      explicit
      __numpunct_cache(const __numpunct_cache&);
    };
#pragma empty_line
  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
#pragma line 1641 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;
#pragma empty_line
      typedef __numpunct_cache<_CharT> __cache_type;
#pragma empty_line
    protected:
      __cache_type* _M_data;
#pragma empty_line
    public:
#pragma empty_line
      static locale::id id;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      explicit
      numpunct(size_t __refs = 0)
      : facet(__refs), _M_data(0)
      { _M_initialize_numpunct(); }
#pragma line 1679 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
#pragma line 1693 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(0)
      { _M_initialize_numpunct(__cloc); }
#pragma line 1707 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
#pragma line 1720 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
#pragma line 1751 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
#pragma line 1764 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
#pragma line 1777 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }
#pragma empty_line
    protected:
#pragma empty_line
      virtual
      ~numpunct();
#pragma line 1794 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
#pragma line 1806 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
#pragma line 1819 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
#pragma line 1832 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
#pragma line 1845 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }
#pragma empty_line
#pragma empty_line
      void
      _M_initialize_numpunct(__c_locale __cloc = 0);
    };
#pragma empty_line
  template<typename _CharT>
    locale::id numpunct<_CharT>::id;
#pragma empty_line
  template<>
    numpunct<char>::~numpunct();
#pragma empty_line
  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);
#pragma empty_line
#pragma empty_line
  template<>
    numpunct<wchar_t>::~numpunct();
#pragma empty_line
  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;
#pragma empty_line
      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }
#pragma empty_line
    protected:
      virtual
      ~numpunct_byname() { }
    };
#pragma empty_line
#pragma empty_line
#pragma line 1915 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef _InIter iter_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
      static locale::id id;
#pragma line 1936 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
#pragma line 1962 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma line 1998 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma line 2057 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma line 2099 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
#pragma empty_line
    protected:
#pragma empty_line
      virtual ~num_get() { }
#pragma empty_line
      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;
#pragma empty_line
      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;
#pragma empty_line
      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }
#pragma empty_line
      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
#pragma line 2170 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;
#pragma empty_line
      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }
#pragma empty_line
      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }
#pragma empty_line
      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }
#pragma empty_line
      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }
#pragma empty_line
      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;
#pragma empty_line
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
#pragma line 2235 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
    };
#pragma empty_line
  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
#pragma line 2253 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef _OutIter iter_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
      static locale::id id;
#pragma line 2274 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
#pragma line 2292 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma line 2334 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma empty_line
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma empty_line
#pragma empty_line
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma empty_line
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma line 2397 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma empty_line
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma line 2422 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }
#pragma empty_line
    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;
#pragma empty_line
      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;
#pragma empty_line
      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;
#pragma empty_line
      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;
#pragma empty_line
      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;
#pragma empty_line
#pragma empty_line
      virtual
      ~num_put() { };
#pragma line 2470 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;
#pragma empty_line
      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }
#pragma empty_line
      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }
#pragma empty_line
      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;
#pragma empty_line
#pragma empty_line
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    };
#pragma empty_line
  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 1 3
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
#pragma empty_line
#pragma line 36 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };
#pragma empty_line
#pragma empty_line
  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = 0;
     try
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };
#pragma empty_line
  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;
#pragma empty_line
      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);
#pragma empty_line
      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      try
 {
   _M_grouping_size = __np.grouping().size();
   __grouping = new char[_M_grouping_size];
   __np.grouping().copy(__grouping, _M_grouping_size);
   _M_grouping = __grouping;
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(_M_grouping[0]) > 0
        && (_M_grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));
#pragma empty_line
   _M_truename_size = __np.truename().size();
   __truename = new _CharT[_M_truename_size];
   __np.truename().copy(__truename, _M_truename_size);
   _M_truename = __truename;
#pragma empty_line
   _M_falsename_size = __np.falsename().size();
   __falsename = new _CharT[_M_falsename_size];
   __np.falsename().copy(__falsename, _M_falsename_size);
   _M_falsename = __falsename;
#pragma empty_line
   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();
#pragma empty_line
   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);
 }
      catch(...)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
   throw;
 }
    }
#pragma line 138 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
  __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();
#pragma empty_line
#pragma empty_line
      bool __testeof = __beg == __end;
#pragma empty_line
#pragma empty_line
      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }
#pragma empty_line
#pragma empty_line
      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;
#pragma empty_line
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }
#pragma empty_line
#pragma empty_line
      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;
#pragma empty_line
      if (!__lc->_M_allocated)
#pragma empty_line
 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {
#pragma empty_line
  __xtrc += 'e';
  __found_sci = true;
#pragma empty_line
#pragma empty_line
  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;
#pragma empty_line
     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {
#pragma empty_line
#pragma empty_line
     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {
#pragma empty_line
#pragma empty_line
      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {
#pragma empty_line
#pragma empty_line
   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {
#pragma empty_line
      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;
#pragma empty_line
#pragma empty_line
      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }
#pragma empty_line
     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      if (__found_grouping.size())
        {
#pragma empty_line
   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);
#pragma empty_line
          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }
#pragma empty_line
      return __beg;
    }
#pragma empty_line
  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();
#pragma empty_line
#pragma empty_line
 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);
#pragma empty_line
#pragma empty_line
 bool __testeof = __beg == __end;
#pragma empty_line
#pragma empty_line
 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }
#pragma empty_line
#pragma empty_line
#pragma empty_line
 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;
#pragma empty_line
     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }
#pragma empty_line
#pragma empty_line
#pragma empty_line
 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);
#pragma empty_line
#pragma empty_line
 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;
#pragma empty_line
 if (!__lc->_M_allocated)
#pragma empty_line
   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;
#pragma empty_line
       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }
#pragma empty_line
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {
#pragma empty_line
#pragma empty_line
       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {
#pragma empty_line
#pragma empty_line
    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;
#pragma empty_line
    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }
#pragma empty_line
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
#pragma empty_line
#pragma empty_line
#pragma empty_line
 if (__found_grouping.size())
   {
#pragma empty_line
     __found_grouping += static_cast<char>(__sep_pos);
#pragma empty_line
     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }
#pragma empty_line
#pragma empty_line
#pragma empty_line
 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;
#pragma empty_line
 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {
#pragma empty_line
#pragma empty_line
#pragma empty_line
   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {
#pragma empty_line
#pragma empty_line
       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {
#pragma empty_line
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);
#pragma empty_line
   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }
#pragma empty_line
       const char_type __c = *__beg;
#pragma empty_line
       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];
#pragma empty_line
       if (!__testf && __donet)
  break;
#pragma empty_line
       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];
#pragma empty_line
       if (!__testt && __donef)
  break;
#pragma empty_line
       if (!__testt && !__testf)
  break;
#pragma empty_line
       ++__n;
       ++__beg;
#pragma empty_line
       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {
#pragma empty_line
#pragma empty_line
       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }
#pragma empty_line
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
#pragma empty_line
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
#pragma line 732 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
#pragma empty_line
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {
#pragma empty_line
      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);
#pragma empty_line
      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;
#pragma empty_line
      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);
#pragma empty_line
#pragma empty_line
      __io.flags(__fmt);
#pragma empty_line
      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {
#pragma empty_line
#pragma empty_line
      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {
#pragma empty_line
   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {
#pragma empty_line
   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {
#pragma empty_line
   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();
#pragma empty_line
#pragma empty_line
 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));
#pragma empty_line
#pragma empty_line
#pragma empty_line
 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;
#pragma empty_line
#pragma empty_line
 if (__lc->_M_use_grouping)
   {
#pragma empty_line
#pragma empty_line
     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }
#pragma empty_line
#pragma empty_line
 if (__builtin_expect(__dec, true))
   {
#pragma empty_line
     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {
#pragma empty_line
  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];
#pragma empty_line
  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }
#pragma empty_line
#pragma empty_line
 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 return std::__write(__s, __cs, __len);
      }
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);
#pragma empty_line
#pragma empty_line
      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
#pragma line 968 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
#pragma empty_line
#pragma empty_line
 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();
#pragma empty_line
 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;
#pragma empty_line
#pragma empty_line
 int __len;
#pragma empty_line
 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);
#pragma empty_line
#pragma empty_line
 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
#pragma line 1029 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
#pragma empty_line
 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);
#pragma empty_line
#pragma empty_line
 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {
#pragma empty_line
#pragma empty_line
     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));
#pragma empty_line
     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }
#pragma empty_line
     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;
#pragma empty_line
     __ws = __ws2;
   }
#pragma empty_line
#pragma empty_line
 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 return std::__write(__s, __ws, __len);
      }
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);
#pragma empty_line
   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;
#pragma empty_line
   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));
#pragma empty_line
       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);
#pragma empty_line
       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
#pragma line 1154 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }
#pragma empty_line
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));
#pragma empty_line
      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;
#pragma empty_line
      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
#pragma empty_line
#pragma empty_line
#pragma line 1191 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;
#pragma empty_line
#pragma empty_line
      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }
#pragma empty_line
      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {
#pragma empty_line
#pragma empty_line
#pragma empty_line
          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
#pragma empty_line
   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }
#pragma empty_line
 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }
#pragma empty_line
  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;
#pragma empty_line
      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }
#pragma empty_line
      while (__first != __last)
 *__s++ = *__first++;
#pragma empty_line
      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }
#pragma empty_line
      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }
#pragma empty_line
      return __s;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;
#pragma empty_line
  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);
#pragma empty_line
  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);
#pragma empty_line
  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);
#pragma empty_line
  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<ctype<char> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<numpunct<char> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<num_put<char> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<num_get<char> >(const locale&);
#pragma empty_line
#pragma empty_line
  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;
#pragma empty_line
  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);
#pragma empty_line
 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);
#pragma empty_line
  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 2609 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/locale_facets.h" 2 3
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 2 3
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
#pragma line 63 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;
#pragma empty_line
#pragma empty_line
      const __ctype_type* _M_ctype;
#pragma empty_line
      const __num_put_type* _M_num_put;
#pragma empty_line
      const __num_get_type* _M_num_get;
#pragma empty_line
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }
#pragma empty_line
      bool
      operator!() const
      { return this->fail(); }
#pragma line 128 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
#pragma line 139 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      _M_setstate(iostate __state)
      {
#pragma empty_line
#pragma empty_line
 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
   throw;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      bool
      good() const
      { return this->rdstate() == 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
#pragma line 192 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
#pragma line 213 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
#pragma line 248 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual
      ~basic_ios() { }
#pragma line 286 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
#pragma line 298 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
#pragma line 338 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
#pragma line 352 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
#pragma line 381 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
#pragma line 401 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
#pragma line 421 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
#pragma line 440 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }
#pragma empty_line
    protected:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      init(basic_streambuf<_CharT, _Traits>* __sb);
#pragma empty_line
      void
      _M_cache_locale(const locale& __loc);
    };
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.tcc" 1 3
#pragma line 34 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.tcc" 3
#pragma empty_line
#pragma line 35 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.tcc" 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {
#pragma empty_line
#pragma empty_line
      if (this != &__rhs)
 {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];
#pragma empty_line
#pragma empty_line
   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();
#pragma empty_line
#pragma empty_line
   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;
#pragma empty_line
   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);
#pragma empty_line
   _M_call_callbacks(copyfmt_event);
#pragma empty_line
#pragma empty_line
   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {
#pragma empty_line
      ios_base::_M_init();
#pragma empty_line
#pragma empty_line
      _M_cache_locale(_M_ios_locale);
#pragma line 147 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;
#pragma empty_line
      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;
#pragma empty_line
      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;
#pragma empty_line
      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class basic_ios<char>;
#pragma empty_line
#pragma empty_line
  extern template class basic_ios<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 474 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/basic_ios.h" 2 3
#pragma line 46 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ios" 2 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 2 3
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 56 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
#pragma line 83 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual
      ~basic_ostream() { }
#pragma empty_line
#pragma empty_line
      class sentry;
      friend class sentry;
#pragma line 109 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {
#pragma empty_line
#pragma empty_line
#pragma empty_line
 return __pf(*this);
      }
#pragma empty_line
      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {
#pragma empty_line
#pragma empty_line
#pragma empty_line
 __pf(*this);
 return *this;
      }
#pragma empty_line
      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {
#pragma empty_line
#pragma empty_line
#pragma empty_line
 __pf(*this);
 return *this;
      }
#pragma line 166 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }
#pragma empty_line
      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }
#pragma empty_line
      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }
#pragma empty_line
      __ostream_type&
      operator<<(short __n);
#pragma empty_line
      __ostream_type&
      operator<<(unsigned short __n)
      {
#pragma empty_line
#pragma empty_line
 return _M_insert(static_cast<unsigned long>(__n));
      }
#pragma empty_line
      __ostream_type&
      operator<<(int __n);
#pragma empty_line
      __ostream_type&
      operator<<(unsigned int __n)
      {
#pragma empty_line
#pragma empty_line
 return _M_insert(static_cast<unsigned long>(__n));
      }
#pragma empty_line
#pragma empty_line
      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }
#pragma empty_line
      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }
#pragma empty_line
#pragma empty_line
      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }
#pragma empty_line
      __ostream_type&
      operator<<(float __f)
      {
#pragma empty_line
#pragma empty_line
 return _M_insert(static_cast<double>(__f));
      }
#pragma empty_line
      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }
#pragma empty_line
      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
#pragma line 251 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
#pragma line 284 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      put(char_type __c);
#pragma empty_line
#pragma empty_line
      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
#pragma line 312 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
#pragma line 325 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      flush();
#pragma line 336 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      pos_type
      tellp();
#pragma line 347 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      __ostream_type&
      seekp(pos_type);
#pragma line 359 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);
#pragma empty_line
    protected:
      basic_ostream()
      { this->init(0); }
#pragma empty_line
      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
#pragma line 378 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {
#pragma empty_line
      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;
#pragma empty_line
    public:
#pragma line 397 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
#pragma line 407 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      ~sentry()
      {
#pragma empty_line
 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {
#pragma empty_line
     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
#pragma line 428 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
      operator bool() const
      { return _M_ok; }
    };
#pragma line 449 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }
#pragma empty_line
#pragma empty_line
  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }
#pragma empty_line
#pragma empty_line
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }
#pragma empty_line
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
#pragma line 491 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);
#pragma empty_line
#pragma empty_line
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }
#pragma empty_line
#pragma empty_line
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
#pragma empty_line
  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
#pragma line 541 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
#pragma line 585 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 3
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream.tcc" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream.tcc" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/ostream.tcc" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {
#pragma empty_line
      if (__os.tie() && __os.good())
 __os.tie()->flush();
#pragma empty_line
      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     try
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {
#pragma empty_line
#pragma empty_line
      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {
#pragma empty_line
#pragma empty_line
      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   try
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      sentry __cerb(*this);
      if (__cerb)
 {
   try
     { _M_write(__s, __n); }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ios_base::iostate __err = ios_base::goodbit;
      try
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      try
 {
   if (!this->fail())
     {
#pragma empty_line
#pragma empty_line
       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);
#pragma empty_line
#pragma empty_line
       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      try
 {
   if (!this->fail())
     {
#pragma empty_line
#pragma empty_line
       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);
#pragma empty_line
#pragma empty_line
       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {
#pragma empty_line
#pragma empty_line
   const size_t __clen = char_traits<char>::length(__s);
   try
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);
#pragma empty_line
       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);
#pragma empty_line
  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);
#pragma empty_line
  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);
#pragma empty_line
  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);
#pragma empty_line
#pragma empty_line
  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);
#pragma empty_line
  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);
#pragma empty_line
  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);
#pragma empty_line
  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 589 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/ostream" 2 3
#pragma line 41 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 2 3
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 1 3
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
#pragma empty_line
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 56 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;
#pragma empty_line
    protected:
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      streamsize _M_gcount;
#pragma empty_line
    public:
#pragma line 92 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }
#pragma empty_line
#pragma empty_line
      class sentry;
      friend class sentry;
#pragma line 121 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }
#pragma empty_line
      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }
#pragma empty_line
      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
#pragma line 168 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }
#pragma empty_line
      __istream_type&
      operator>>(short& __n);
#pragma empty_line
      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }
#pragma empty_line
      __istream_type&
      operator>>(int& __n);
#pragma empty_line
      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }
#pragma empty_line
      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }
#pragma empty_line
      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }
#pragma empty_line
#pragma empty_line
      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }
#pragma empty_line
      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }
#pragma empty_line
#pragma empty_line
      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }
#pragma empty_line
      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }
#pragma empty_line
      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }
#pragma empty_line
      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
#pragma line 240 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
#pragma line 250 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
#pragma line 282 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      int_type
      get();
#pragma line 296 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      get(char_type& __c);
#pragma line 323 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
#pragma line 334 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
#pragma line 357 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
#pragma line 367 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
#pragma line 396 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
#pragma line 407 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
#pragma line 431 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      ignore();
#pragma empty_line
      __istream_type&
      ignore(streamsize __n);
#pragma empty_line
      __istream_type&
      ignore(streamsize __n, int_type __delim);
#pragma line 448 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      int_type
      peek();
#pragma line 466 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
#pragma line 485 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
#pragma line 502 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      putback(char_type __c);
#pragma line 518 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      unget();
#pragma line 536 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      int
      sync();
#pragma line 551 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      pos_type
      tellg();
#pragma line 566 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      seekg(pos_type);
#pragma line 582 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);
#pragma empty_line
#pragma empty_line
    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }
#pragma empty_line
      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };
#pragma empty_line
#pragma empty_line
  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);
#pragma empty_line
  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);
#pragma empty_line
  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);
#pragma empty_line
#pragma empty_line
  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);
#pragma empty_line
  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);
#pragma empty_line
  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
#pragma line 637 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
#pragma empty_line
      bool _M_ok;
#pragma empty_line
    public:
#pragma empty_line
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
#pragma line 673 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
#pragma line 686 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
      operator bool() const
      { return _M_ok; }
    };
#pragma line 703 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);
#pragma empty_line
  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
#pragma empty_line
  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
#pragma line 745 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);
#pragma empty_line
#pragma empty_line
  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);
#pragma empty_line
  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
#pragma empty_line
  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
#pragma line 773 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:
#pragma empty_line
#pragma empty_line
#pragma empty_line
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      virtual
      ~basic_iostream() { }
#pragma empty_line
    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
#pragma line 834 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
#pragma line 856 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 3
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/istream.tcc" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/istream.tcc" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/istream.tcc" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();
#pragma empty_line
       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }
#pragma empty_line
      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     try
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {
#pragma empty_line
#pragma empty_line
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);
#pragma empty_line
#pragma empty_line
#pragma empty_line
       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {
#pragma empty_line
#pragma empty_line
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);
#pragma empty_line
#pragma empty_line
#pragma empty_line
       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   try
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::failbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       __c = this->rdbuf()->sbumpc();
#pragma empty_line
       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __cb = this->rdbuf()->sbumpc();
#pragma empty_line
       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();
#pragma empty_line
       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
#pragma empty_line
#pragma empty_line
      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);
#pragma empty_line
       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          try
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
#pragma empty_line
              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
        }
#pragma empty_line
#pragma empty_line
      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
#pragma empty_line
       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
#pragma line 515 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }
#pragma empty_line
       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;
#pragma empty_line
       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
#pragma empty_line
#pragma empty_line
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }
#pragma empty_line
       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;
#pragma empty_line
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
#pragma empty_line
       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {
#pragma empty_line
#pragma empty_line
      _M_gcount = 0;
#pragma empty_line
      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {
#pragma empty_line
#pragma empty_line
      _M_gcount = 0;
#pragma empty_line
      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {
#pragma empty_line
#pragma empty_line
      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {
#pragma empty_line
#pragma empty_line
      pos_type __ret = pos_type(-1);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       if (!this->fail())
  __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
        ios_base::in);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return __ret;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       if (!this->fail())
  {
#pragma empty_line
    const pos_type __p = this->rdbuf()->pubseekpos(__pos,
         ios_base::in);
#pragma empty_line
#pragma empty_line
    if (__p == pos_type(off_type(-1)))
      __err |= ios_base::failbit;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {
#pragma empty_line
#pragma empty_line
#pragma empty_line
      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       if (!this->fail())
  {
#pragma empty_line
    const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
         ios_base::in);
#pragma empty_line
#pragma empty_line
    if (__p == pos_type(off_type(-1)))
      __err |= ios_base::failbit;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;
#pragma empty_line
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;
#pragma empty_line
      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {
#pragma empty_line
       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
#pragma empty_line
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
#pragma empty_line
       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();
#pragma empty_line
       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
#pragma empty_line
#pragma empty_line
#pragma empty_line
       *__s = char_type();
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }
#pragma empty_line
#pragma empty_line
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;
#pragma empty_line
      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();
#pragma empty_line
      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();
#pragma empty_line
       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);
#pragma empty_line
  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);
#pragma empty_line
  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);
#pragma empty_line
  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);
#pragma empty_line
  extern template class basic_iostream<char>;
#pragma empty_line
#pragma empty_line
  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);
#pragma empty_line
  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);
#pragma empty_line
  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);
#pragma empty_line
  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);
#pragma empty_line
  extern template class basic_iostream<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 860 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/istream" 2 3
#pragma line 42 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 2 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 61 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/iostream" 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;
#pragma empty_line
#pragma empty_line
  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  static ios_base::Init __ioinit;
#pragma empty_line
#pragma empty_line
}
#pragma line 3 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr_tb.cpp" 2
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 1 3
#pragma line 37 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
#pragma empty_line
#pragma line 38 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma line 59 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_stringbuf : public basic_streambuf<_CharT, _Traits>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;
#pragma empty_line
      typedef basic_streambuf<char_type, traits_type> __streambuf_type;
      typedef basic_string<char_type, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
#pragma empty_line
    protected:
#pragma empty_line
      ios_base::openmode _M_mode;
#pragma empty_line
#pragma empty_line
      __string_type _M_string;
#pragma empty_line
    public:
#pragma line 93 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_stringbuf(ios_base::openmode __mode = ios_base::in | ios_base::out)
      : __streambuf_type(), _M_mode(__mode), _M_string()
      { }
#pragma line 106 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_stringbuf(const __string_type& __str,
        ios_base::openmode __mode = ios_base::in | ios_base::out)
      : __streambuf_type(), _M_mode(), _M_string(__str.data(), __str.size())
      { _M_stringbuf_init(__mode); }
#pragma line 121 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      __string_type
      str() const
      {
 __string_type __ret;
 if (this->pptr())
   {
#pragma empty_line
     if (this->pptr() > this->egptr())
       __ret = __string_type(this->pbase(), this->pptr());
     else
        __ret = __string_type(this->pbase(), this->egptr());
   }
 else
   __ret = _M_string;
 return __ret;
      }
#pragma line 145 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      void
      str(const __string_type& __s)
      {
#pragma empty_line
 _M_string.assign(__s.data(), __s.size());
 _M_stringbuf_init(_M_mode);
      }
#pragma empty_line
    protected:
#pragma empty_line
      void
      _M_stringbuf_init(ios_base::openmode __mode)
      {
 _M_mode = __mode;
 __size_type __len = 0;
 if (_M_mode & (ios_base::ate | ios_base::app))
   __len = _M_string.size();
 _M_sync(const_cast<char_type*>(_M_string.data()), 0, __len);
      }
#pragma empty_line
      virtual streamsize
      showmanyc()
      {
 streamsize __ret = -1;
 if (_M_mode & ios_base::in)
   {
     _M_update_egptr();
     __ret = this->egptr() - this->gptr();
   }
 return __ret;
      }
#pragma empty_line
      virtual int_type
      underflow();
#pragma empty_line
      virtual int_type
      pbackfail(int_type __c = traits_type::eof());
#pragma empty_line
      virtual int_type
      overflow(int_type __c = traits_type::eof());
#pragma line 197 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      virtual __streambuf_type*
      setbuf(char_type* __s, streamsize __n)
      {
 if (__s && __n >= 0)
   {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
     _M_string.clear();
#pragma empty_line
#pragma empty_line
     _M_sync(__s, __n, 0);
   }
 return this;
      }
#pragma empty_line
      virtual pos_type
      seekoff(off_type __off, ios_base::seekdir __way,
       ios_base::openmode __mode = ios_base::in | ios_base::out);
#pragma empty_line
      virtual pos_type
      seekpos(pos_type __sp,
       ios_base::openmode __mode = ios_base::in | ios_base::out);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      _M_sync(char_type* __base, __size_type __i, __size_type __o);
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      _M_update_egptr()
      {
 const bool __testin = _M_mode & ios_base::in;
 if (this->pptr() && this->pptr() > this->egptr())
   {
     if (__testin)
       this->setg(this->eback(), this->gptr(), this->pptr());
     else
       this->setg(this->pptr(), this->pptr(), this->pptr());
   }
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      _M_pbump(char_type* __pbeg, char_type* __pend, off_type __off);
    };
#pragma line 262 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_istringstream : public basic_istream<_CharT, _Traits>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;
#pragma empty_line
#pragma empty_line
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef basic_stringbuf<_CharT, _Traits, _Alloc> __stringbuf_type;
      typedef basic_istream<char_type, traits_type> __istream_type;
#pragma empty_line
    private:
      __stringbuf_type _M_stringbuf;
#pragma empty_line
    public:
#pragma line 298 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_istringstream(ios_base::openmode __mode = ios_base::in)
      : __istream_type(), _M_stringbuf(__mode | ios_base::in)
      { this->init(&_M_stringbuf); }
#pragma line 316 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_istringstream(const __string_type& __str,
     ios_base::openmode __mode = ios_base::in)
      : __istream_type(), _M_stringbuf(__str, __mode | ios_base::in)
      { this->init(&_M_stringbuf); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ~basic_istringstream()
      { }
#pragma line 338 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      __stringbuf_type*
      rdbuf() const
      { return const_cast<__stringbuf_type*>(&_M_stringbuf); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      __string_type
      str() const
      { return _M_stringbuf.str(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      str(const __string_type& __s)
      { _M_stringbuf.str(__s); }
    };
#pragma line 372 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
  template <typename _CharT, typename _Traits, typename _Alloc>
    class basic_ostringstream : public basic_ostream<_CharT, _Traits>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;
#pragma empty_line
#pragma empty_line
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef basic_stringbuf<_CharT, _Traits, _Alloc> __stringbuf_type;
      typedef basic_ostream<char_type, traits_type> __ostream_type;
#pragma empty_line
    private:
      __stringbuf_type _M_stringbuf;
#pragma empty_line
    public:
#pragma line 408 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_ostringstream(ios_base::openmode __mode = ios_base::out)
      : __ostream_type(), _M_stringbuf(__mode | ios_base::out)
      { this->init(&_M_stringbuf); }
#pragma line 426 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_ostringstream(const __string_type& __str,
     ios_base::openmode __mode = ios_base::out)
      : __ostream_type(), _M_stringbuf(__str, __mode | ios_base::out)
      { this->init(&_M_stringbuf); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ~basic_ostringstream()
      { }
#pragma line 448 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      __stringbuf_type*
      rdbuf() const
      { return const_cast<__stringbuf_type*>(&_M_stringbuf); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      __string_type
      str() const
      { return _M_stringbuf.str(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      str(const __string_type& __s)
      { _M_stringbuf.str(__s); }
    };
#pragma line 482 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
  template <typename _CharT, typename _Traits, typename _Alloc>
    class basic_stringstream : public basic_iostream<_CharT, _Traits>
    {
    public:
#pragma empty_line
      typedef _CharT char_type;
      typedef _Traits traits_type;
#pragma empty_line
#pragma empty_line
      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;
#pragma empty_line
#pragma empty_line
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef basic_stringbuf<_CharT, _Traits, _Alloc> __stringbuf_type;
      typedef basic_iostream<char_type, traits_type> __iostream_type;
#pragma empty_line
    private:
      __stringbuf_type _M_stringbuf;
#pragma empty_line
    public:
#pragma line 516 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_stringstream(ios_base::openmode __m = ios_base::out | ios_base::in)
      : __iostream_type(), _M_stringbuf(__m)
      { this->init(&_M_stringbuf); }
#pragma line 532 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      explicit
      basic_stringstream(const __string_type& __str,
    ios_base::openmode __m = ios_base::out | ios_base::in)
      : __iostream_type(), _M_stringbuf(__str, __m)
      { this->init(&_M_stringbuf); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ~basic_stringstream()
      { }
#pragma line 554 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 3
      __stringbuf_type*
      rdbuf() const
      { return const_cast<__stringbuf_type*>(&_M_stringbuf); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      __string_type
      str() const
      { return _M_stringbuf.str(); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      void
      str(const __string_type& __s)
      { _M_stringbuf.str(__s); }
    };
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma line 1 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/sstream.tcc" 1 3
#pragma line 39 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/sstream.tcc" 3
#pragma empty_line
#pragma line 40 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/sstream.tcc" 3
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::int_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    pbackfail(int_type __c)
    {
      int_type __ret = traits_type::eof();
      if (this->eback() < this->gptr())
 {
#pragma empty_line
#pragma empty_line
   const bool __testeof = traits_type::eq_int_type(__c, __ret);
   if (!__testeof)
     {
       const bool __testeq = traits_type::eq(traits_type::
          to_char_type(__c),
          this->gptr()[-1]);
       const bool __testout = this->_M_mode & ios_base::out;
       if (__testeq || __testout)
  {
    this->gbump(-1);
    if (!__testeq)
      *this->gptr() = traits_type::to_char_type(__c);
    __ret = __c;
  }
     }
   else
     {
       this->gbump(-1);
       __ret = traits_type::not_eof(__c);
     }
 }
      return __ret;
    }
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::int_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    overflow(int_type __c)
    {
      const bool __testout = this->_M_mode & ios_base::out;
      if (__builtin_expect(!__testout, false))
 return traits_type::eof();
#pragma empty_line
      const bool __testeof = traits_type::eq_int_type(__c, traits_type::eof());
      if (__builtin_expect(__testeof, false))
 return traits_type::not_eof(__c);
#pragma empty_line
      const __size_type __capacity = _M_string.capacity();
      const __size_type __max_size = _M_string.max_size();
      const bool __testput = this->pptr() < this->epptr();
      if (__builtin_expect(!__testput && __capacity == __max_size, false))
 return traits_type::eof();
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const char_type __conv = traits_type::to_char_type(__c);
      if (!__testput)
 {
#pragma line 112 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/bits/sstream.tcc" 3
   const __size_type __opt_len = std::max(__size_type(2 * __capacity),
       __size_type(512));
   const __size_type __len = std::min(__opt_len, __max_size);
   __string_type __tmp;
   __tmp.reserve(__len);
   if (this->pbase())
     __tmp.assign(this->pbase(), this->epptr() - this->pbase());
   __tmp.push_back(__conv);
   _M_string.swap(__tmp);
   _M_sync(const_cast<char_type*>(_M_string.data()),
    this->gptr() - this->eback(), this->pptr() - this->pbase());
 }
      else
 *this->pptr() = __conv;
      this->pbump(1);
      return __c;
    }
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::int_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    underflow()
    {
      int_type __ret = traits_type::eof();
      const bool __testin = this->_M_mode & ios_base::in;
      if (__testin)
 {
#pragma empty_line
   _M_update_egptr();
#pragma empty_line
   if (this->gptr() < this->egptr())
     __ret = traits_type::to_int_type(*this->gptr());
 }
      return __ret;
    }
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::pos_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    seekoff(off_type __off, ios_base::seekdir __way, ios_base::openmode __mode)
    {
      pos_type __ret = pos_type(off_type(-1));
      bool __testin = (ios_base::in & this->_M_mode & __mode) != 0;
      bool __testout = (ios_base::out & this->_M_mode & __mode) != 0;
      const bool __testboth = __testin && __testout && __way != ios_base::cur;
      __testin &= !(__mode & ios_base::out);
      __testout &= !(__mode & ios_base::in);
#pragma empty_line
#pragma empty_line
#pragma empty_line
      const char_type* __beg = __testin ? this->eback() : this->pbase();
      if ((__beg || !__off) && (__testin || __testout || __testboth))
 {
   _M_update_egptr();
#pragma empty_line
   off_type __newoffi = __off;
   off_type __newoffo = __newoffi;
   if (__way == ios_base::cur)
     {
       __newoffi += this->gptr() - __beg;
       __newoffo += this->pptr() - __beg;
     }
   else if (__way == ios_base::end)
     __newoffo = __newoffi += this->egptr() - __beg;
#pragma empty_line
   if ((__testin || __testboth)
       && __newoffi >= 0
       && this->egptr() - __beg >= __newoffi)
     {
       this->setg(this->eback(), this->eback() + __newoffi,
    this->egptr());
       __ret = pos_type(__newoffi);
     }
   if ((__testout || __testboth)
       && __newoffo >= 0
       && this->egptr() - __beg >= __newoffo)
     {
       _M_pbump(this->pbase(), this->epptr(), __newoffo);
       __ret = pos_type(__newoffo);
     }
 }
      return __ret;
    }
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::pos_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    seekpos(pos_type __sp, ios_base::openmode __mode)
    {
      pos_type __ret = pos_type(off_type(-1));
      const bool __testin = (ios_base::in & this->_M_mode & __mode) != 0;
      const bool __testout = (ios_base::out & this->_M_mode & __mode) != 0;
#pragma empty_line
      const char_type* __beg = __testin ? this->eback() : this->pbase();
      if ((__beg || !off_type(__sp)) && (__testin || __testout))
 {
   _M_update_egptr();
#pragma empty_line
   const off_type __pos(__sp);
   const bool __testpos = (0 <= __pos
      && __pos <= this->egptr() - __beg);
   if (__testpos)
     {
       if (__testin)
  this->setg(this->eback(), this->eback() + __pos,
      this->egptr());
       if (__testout)
  _M_pbump(this->pbase(), this->epptr(), __pos);
       __ret = __sp;
     }
 }
      return __ret;
    }
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    void
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    _M_sync(char_type* __base, __size_type __i, __size_type __o)
    {
      const bool __testin = _M_mode & ios_base::in;
      const bool __testout = _M_mode & ios_base::out;
      char_type* __endg = __base + _M_string.size();
      char_type* __endp = __base + _M_string.capacity();
#pragma empty_line
      if (__base != _M_string.data())
 {
#pragma empty_line
   __endg += __i;
   __i = 0;
   __endp = __endg;
 }
#pragma empty_line
      if (__testin)
 this->setg(__base, __base + __i, __endg);
      if (__testout)
 {
   _M_pbump(__base, __endp, __o);
#pragma empty_line
#pragma empty_line
#pragma empty_line
   if (!__testin)
     this->setg(__endg, __endg, __endg);
 }
    }
#pragma empty_line
  template <class _CharT, class _Traits, class _Alloc>
    void
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    _M_pbump(char_type* __pbeg, char_type* __pend, off_type __off)
    {
      this->setp(__pbeg, __pend);
      while (__off > __gnu_cxx::__numeric_traits<int>::__max)
 {
   this->pbump(__gnu_cxx::__numeric_traits<int>::__max);
   __off -= __gnu_cxx::__numeric_traits<int>::__max;
 }
      this->pbump(__off);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern template class basic_stringbuf<char>;
  extern template class basic_istringstream<char>;
  extern template class basic_ostringstream<char>;
  extern template class basic_stringstream<char>;
#pragma empty_line
#pragma empty_line
  extern template class basic_stringbuf<wchar_t>;
  extern template class basic_istringstream<wchar_t>;
  extern template class basic_ostringstream<wchar_t>;
  extern template class basic_stringstream<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 581 "c:\\xilinx\\vivado_hls\\2016.4\\msys\\bin\\../lib/gcc/mingw32/4.6.2/include/c++/sstream" 2 3
#pragma line 4 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr_tb.cpp" 2
#pragma empty_line
#pragma line 1 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr.h" 1
#pragma empty_line
#pragma empty_line
namespace simple_lfsr {
#pragma empty_line
 template<unsigned int NBITS>
 int next_random_bits() {
#pragma empty_line
  static int r = 0xc5705a19;
#pragma empty_line
  static unsigned int const mask = (1 << (NBITS)) - 1;
#pragma empty_line
  compute_random_bits: for (int i = 0; i < NBITS; ++i) {
#pragma empty_line
   bool bit31 = r & (1 << 31);
   bool bit29 = r & (1 << 29);
   bool bit25 = r & (1 << 25);
   bool bit24 = r & (1 << 24);
#pragma empty_line
   int newbit = bit31 ^ bit29 ^ bit25 ^ bit24;
#pragma empty_line
   r = (r << 1) | newbit;
  }
#pragma empty_line
  return r & mask;
 }
}
#pragma line 6 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr_tb.cpp" 2
#pragma empty_line
using std::cout;
using std::endl;
using std::stringstream;
#pragma empty_line
int simple_lfsr_next_random_bits() {
 return simple_lfsr::next_random_bits<8>();
}
#pragma empty_line
int main() {
#pragma empty_line
 stringstream ss;
#pragma empty_line
 for (int i = 0; i < 20; ++i) {
  ss << simple_lfsr_next_random_bits() << endl;
 }
#pragma empty_line
 cout << ss.str();
#pragma empty_line
 if (ss.str() !=
  "52\n"
  "138\n"
  "184\n"
  "170\n"
  "129\n"
  "82\n"
  "37\n"
  "224\n"
  "121\n"
  "129\n"
  "58\n"
  "67\n"
  "63\n"
  "86\n"
  "98\n"
  "31\n"
  "188\n"
  "166\n"
  "98\n"
  "80\n") return -1;
#pragma empty_line
 return 0;
}
