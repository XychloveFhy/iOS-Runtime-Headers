/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary;



@interface SUVariableCellConfigurationCache : NSObject 
{
    NSMutableDictionary *_caches;
    id _cellContext;
    float _tableHeight;
}

@property(readonly) NSArray *caches;
@property(retain) id cellContext;


- (void)reset;
- (void)dealloc;
- (id)caches;
- (id)cacheForClass:(Class)arg1;
- (id)cellContext;
- (id)initWithTableHeight:(float)arg1;
- (void)setCellContext:(id)arg1;
- (void)resetLayoutCaches;

@end
