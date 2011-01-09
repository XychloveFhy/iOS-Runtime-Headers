/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageCache, NSString, NSDictionary;



@interface PLCachedImage : UIImage 
{
    NSDictionary *_metadata;
    NSInteger _format;
    PLImageCache *_owningCache;
    NSString *_cacheKey;
}

@property(retain) NSDictionary *metadata;
@property NSInteger format;


- (void)setFormat:(NSInteger)arg1;
- (id)owningCache;
- (void)setCacheKey:(id)arg1;
- (id)cacheKey;
- (id)description;
- (void)release;
- (void)dealloc;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setImageCache:(id)arg1;
- (NSInteger)format;

@end
