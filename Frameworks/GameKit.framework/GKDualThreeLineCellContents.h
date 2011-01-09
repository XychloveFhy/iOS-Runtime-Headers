/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKMultilineCellContentView, UIView;



@interface GKDualThreeLineCellContents : UIView <GKTableViewCellContents>
{
    UIView *_separatorView;
    GKMultilineCellContentView *_topContents;
    GKMultilineCellContentView *_bottomContents;
}

@property(retain) GKMultilineCellContentView *bottomContents;
@property(retain) GKMultilineCellContentView *topContents;


- (void)setTheme:(id)arg1;
- (id)theme;
- (void)setTopContents:(id)arg1;
- (void)setBottomContents:(id)arg1;
- (id)topContents;
- (id)bottomContents;
- (void)prepareForReuse;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;

@end
