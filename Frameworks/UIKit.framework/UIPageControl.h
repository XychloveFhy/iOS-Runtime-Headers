/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;



@interface UIPageControl : UIControl 
{
    NSMutableArray *_indicators;
    NSInteger _currentPage;
    NSInteger _displayedPage;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    } _pageControlFlags;
}

@property BOOL defersCurrentPageDisplay;
@property BOOL hidesForSinglePage;
@property NSInteger currentPage;
@property NSInteger numberOfPages;

+ (void)_initializeSafeCategory;

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_commonPageControlInit;
- (id)_pageIndicatorImageForPage:(NSInteger)arg1;
- (id)_pageIndicatorCurrentImageForPage:(NSInteger)arg1;
- (void)setNumberOfPages:(NSInteger)arg1;
- (NSInteger)numberOfPages;
- (void)setCurrentPage:(NSInteger)arg1;
- (NSInteger)currentPage;
- (void)setHidesForSinglePage:(BOOL)arg1;
- (BOOL)hidesForSinglePage;
- (void)setDefersCurrentPageDisplay:(BOOL)arg1;
- (BOOL)defersCurrentPageDisplay;
- (void)updateCurrentPageDisplay;
- (struct CGSize { float x1; float x2; })sizeForNumberOfPages:(NSInteger)arg1;
- (void)_setDisplayedPage:(NSInteger)arg1;
- (NSInteger)_displayedPage;
- (void)_setCurrentPage:(NSInteger)arg1;
- (void)_updateCurrentPageDisplay;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (NSInteger)_accessibilityPageControlIndex;
- (NSInteger)_accessibilityPageControlCount;

@end
