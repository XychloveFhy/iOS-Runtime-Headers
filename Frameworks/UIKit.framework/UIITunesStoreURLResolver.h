/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;



@interface UIITunesStoreURLResolver : UIURLResolver 
{
    NSArray *_appStoreHostPatterns;
    NSArray *_appStorePathPatterns;
    NSArray *_bookStoreHostPatterns;
    NSArray *_bookStorePathPatterns;
    NSArray *_hostWhiteList;
    NSArray *_musicStoreHostPatterns;
    NSArray *_musicStorePathPatterns;
}

+ (id)urlCacheName;
+ (id)urlCacheChangedNotificationName;

- (id)initWithDictionary:(id)arg1;
- (NSInteger)storeURLTypeForURL:(id)arg1;
- (void)dealloc;

@end
