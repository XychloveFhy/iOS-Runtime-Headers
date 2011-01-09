/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _MKTileCache;



@interface MKTileCache : NSObject 
{
    _MKTileCache *_mapCache;
    _MKTileCache *_trafficCache;
    NSInteger _tile_edition;

  /* Error parsing encoded ivar type info: ^{TileCachePrivate=@"NSString"^{_opaque_pthread_t}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoop}{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}{_opaque_pthread_cond_t="__sig"l"__opaque"[24c]}^{__CFArray}{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}B^{__CFArray}@"GMMTileStore"{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}{_opaque_pthread_cond_t="__sig"l"__opaque"[24c]}B} */
    struct TileCachePrivate { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; unsigned short x4; void*x5; const NSInteger x6; in void*x7; void*x8; struct _opaque_pthread_t {} *x9; struct __CFRunLoopSource {} *x10; struct __CFRunLoopSource {} *x11; struct __CFRunLoop {} *x12; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x13; struct _opaque_pthread_cond_t { 
            long __sig; 
            BOOL __opaque[24]; 
        } x14; struct __CFArray {} *x15; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x16; void*x17; struct __CFArray {} *x18; id x19; void*x20; void*x21; void*x22; void*x23; void*x24; NSInteger x25; long x26; void*x27; unsigned short x28; void*x29; out const void*x30; void*x31; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x32; struct _opaque_pthread_cond_t { 
            long __sig; 
            BOOL __opaque[24]; 
        } x33; void*x34; } *_private;

}

@property(readonly) NSString *rootDirectory;
@property NSInteger tileEdition;

+ (id)rootDirectory;
+ (void)setRootDirectory:(id)arg1;
+ (id)sharedCache;

- (void)compact;
- (id)rootDirectory;
- (void)enterForeground;
- (void)removeExpiredTrafficTiles:(id*)arg1 nextExpireTime:(double*)arg2;
- (id)renderObjectForTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1 useStore:(BOOL)arg2;
- (void)enterBackground;
- (void)clear;
- (void)synchronize;
- (id)init;
- (void)cancelRequests:(struct GMMTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; NSUInteger x13; id x14; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{GMMTileRequester=^^?i^{Connection}*BBBB{_opaque_pthread_mutex_t=l[40c]}^{GMMTileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@}8 */

- (id)renderObjectForTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (void)readTilePaths:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1 count:(NSUInteger)arg2 requester:(struct GMMTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; void*x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct GMMTileResponse {} *x10; struct __CFRunLoop {} *x11; struct __CFRunLoopTimer {} *x12; NSUInteger x13; id x14; }*)arg3;
     /* Encoded args for previous method: v20@0:4^{?=b6b26b26b6}8I12^{GMMTileRequester=^^?i^{Connection}*BBBB{_opaque_pthread_mutex_t=l[40c]}^{GMMTileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@}16 */

- (void)setRenderObject:(id)arg1 forTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg2;
- (void)setRenderData:(const char *)arg1 length:(unsigned long)arg2 skipAddToMemory:(BOOL)arg3 forTilePath:(const struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg4;
- (NSInteger)tileEdition;
- (void)setTileEdition:(NSInteger)arg1;

@end
