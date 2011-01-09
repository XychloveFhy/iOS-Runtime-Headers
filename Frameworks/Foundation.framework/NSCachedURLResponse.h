/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCachedURLResponseInternal;



@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;
}


- (NSUInteger)storagePolicy;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(NSUInteger)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (void)_deallocInternalCFCachedURLResponse;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse { }*)arg1;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse { }*)arg1;
- (struct _CFCachedURLResponse { }*)_CFCachedURLResponse;
- (id)response;
- (id)userInfo;
- (id)data;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
