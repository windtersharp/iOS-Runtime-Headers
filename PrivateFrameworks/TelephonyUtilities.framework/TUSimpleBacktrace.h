/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSArray, NSDictionary;

@interface TUSimpleBacktrace : NSObject <TUBacktrace> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSDictionary *_dyldContext;
    BOOL _shouldSymbolicate;
    } _symbolicateLock;
    NSArray *_symbolicatedBacktraceStrings;
    void **_unsymbolicatedBacktrace;
    int _unsymbolicatedBacktraceLength;
}

@property(readonly) NSDictionary * dyldContext;
@property BOOL shouldSymbolicate;
@property(readonly) NSArray * symbolicatedBacktraceStrings;
@property(readonly) NSArray * unsymbolicatedBacktraceStrings;

+ (void)_rebuildDyldContext;
+ (id)dyldContext;

- (void)_initWithBacktrace:(void**)arg1 length:(int)arg2 ignoreTopEntries:(int)arg3 symbolicateImmediately:(BOOL)arg4;
- (void)dealloc;
- (id)dyldContext;
- (id)init;
- (id)initIgnoringTopEntries:(int)arg1 symbolicateImmediately:(BOOL)arg2;
- (id)initWithExistingBacktrace:(void**)arg1 length:(int)arg2 symbolicateImmediately:(BOOL)arg3;
- (id)initWithSymbolicatedBacktraceStrings:(id)arg1 dyldContext:(id)arg2;
- (void)setShouldSymbolicate:(BOOL)arg1;
- (BOOL)shouldSymbolicate;
- (void)symbolicate;
- (id)symbolicatedBacktraceStrings;
- (id)unsymbolicatedBacktraceStrings;

@end