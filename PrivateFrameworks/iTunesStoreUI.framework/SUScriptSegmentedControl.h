/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;



@interface SUScriptSegmentedControl : SUScriptObject 
{
    NSArray *_segments;
    NSInteger _selectedIndex;
    NSInteger _style;
}

@property(readonly) UISegmentedControl *nativeSegmentedControl;
@property(readonly) NSNumber *noSegmentIndex;
@property(retain) id segments;
@property(retain) NSNumber *selectedIndex;
@property(retain) NSString *style;
@property(readonly) UISegmentedControl *activeSegmentedControl;
@property(readonly) NSArray *rawSegments;
@property(readonly) SUStorePageViewController *storePageViewController;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)attributeKeys;
- (void)_setStyle:(NSInteger)arg1;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (NSInteger)_style;
- (void)dealloc;
- (id)nativeSegmentedControl;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)noSegmentIndex;
- (void)setNoSegmentIndex:(id)arg1;
- (void)setSegments:(id)arg1;
- (id)_copySegments;
- (void)_setSegments:(id)arg1;
- (id)activeSegmentedControl;
- (id)rawSegments;
- (id)storePageViewController;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (NSInteger)_sectionsStyleForString:(id)arg1;
- (void)_setRawSegments:(id)arg1;
- (void)_setSelectedIndex:(NSInteger)arg1;
- (NSInteger)_selectedIndex;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)newPageSectionGroup;
- (id)segments;
- (id)_className;
- (id)scriptAttributeKeys;

@end
