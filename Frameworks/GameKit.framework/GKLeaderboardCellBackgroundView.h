/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKLeaderboardCellBackgroundView : GKCellBackgroundView 
{
    NSInteger _gkCellStyle;
    float _rankAvailableWidth;
}

@property float rankAvailableWidth;
@property NSInteger gkCellStyle;

+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;
+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;

- (void)drawScaledFillImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)setRankAvailableWidth:(float)arg1;
- (NSInteger)gkCellStyle;
- (float)rankAvailableWidth;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGkCellStyle:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
