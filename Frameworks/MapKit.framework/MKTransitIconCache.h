/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSMutableDictionary, NSMutableSet;



@interface MKTransitIconCache : NSObject 
{
    NSMutableSet *_iconIDs;
    NSMutableDictionary *_IDToImage;
    NSString *_cacheFolderPath;
    NSUInteger _iconSize;
    float _iconScale;
    NSInteger _iconVersion;
    BOOL _isEnabled;
}

@property(readonly) NSArray *iconIDs;
@property BOOL isEnabled;
@property float iconScale;
@property NSUInteger iconSize;
@property NSInteger iconVersion;
@property(retain) NSString *cacheFolderPath;

+ (id)sharedTransitIconCache;

- (id)_infoPath;
- (void)_resetCache;
- (void)setCacheFolderPath:(id)arg1;
- (void)setIsEnabled:(BOOL)arg1;
- (id)_iconPathForID:(long long)arg1;
- (void)_addImage:(id)arg1 withID:(long long)arg2;
- (float)iconScale;
- (void)setIconScale:(float)arg1;
- (void)setIconSize:(NSUInteger)arg1;
- (id)cacheFolderPath;
- (id)iconForID:(long long)arg1;
- (void)setIconData:(id)arg1 forID:(long long)arg2;
- (NSUInteger)iconSize;
- (id)iconIDs;
- (id)init;
- (BOOL)isEnabled;
- (void)setIconVersion:(NSInteger)arg1;
- (NSInteger)iconVersion;

@end
