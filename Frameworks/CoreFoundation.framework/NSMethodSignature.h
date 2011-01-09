/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSMethodSignature : NSObject 
{
    void *_private;
    void *_reserved[6];
}

+ (id)signatureWithObjCTypes:(const char *)arg1;

- (const char *)methodReturnType;
- (NSUInteger)numberOfArguments;
- (const char *)getArgumentTypeAtIndex:(NSUInteger)arg1;
- (struct { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; NSUInteger x3; NSUInteger x4; }*)_frameDescriptor;
- (struct NSMethodFrameArgInfo { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; unsigned char x7; BOOL x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned char x25; BOOL x26[0]; }*)_argInfo:(NSInteger)arg1;
- (id)_typeString;
- (NSUInteger)frameLength;
- (BOOL)isOneway;
- (id)debugDescription;
- (NSUInteger)methodReturnLength;
- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (void)dealloc;

@end
