/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class UIPDFParagraphSelectionWidget, UIPDFView, NSMutableArray, <UIPDFViewSelectionWidget>, CAShapeLayer, UIPDFWordSelectionWidget, UIScrollView, UIPDFSelection;



@interface UIPDFSelectionLayer : CALayer 
{
    UIPDFView *pdfView;
    UIScrollView *parent;
    struct CGPDFNode { } *startingParagraph;
    struct CGColor { } *highLightColor;
    CAShapeLayer *highLight;
    NSMutableArray *currentSelections;
    NSInteger currentSelectionType;
    UIPDFSelection *selectedParagraph;
    UIPDFWordSelectionWidget *wordSelectionWidget;
    UIPDFParagraphSelectionWidget *paragraphSelectionWidget;
    <UIPDFViewSelectionWidget> *currentSelectionWidget;
    BOOL widgetsVisible;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } transform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } inverseTransform;
    float yOffset;
    BOOL wordMode;
    BOOL tracking;
    struct CGPoint { 
        float x; 
        float y; 
    } previousTrackingPoint;
    BOOL leftToRight;
}

@property(readonly) NSArray *selections;


- (id)initInView:(id)arg1 yOffset:(float)arg2;
- (struct CGPDFNode { }*)hitNode:(struct CGPoint { float x1; float x2; })arg1 page:(id)arg2;
- (struct CGPDFNode { }*)wordAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBrowseMode:(struct CGPoint { float x1; float x2; })arg1;
- (void)pressAt:(struct CGPoint { float x1; float x2; })arg1 on:(id)arg2;
- (BOOL)isSelectionVisible:(id)arg1;
- (BOOL)isSelectionVisible;
- (void)replaceSelection:(id)arg1;
- (void)addSelectionsFrom:(struct CGPoint { float x1; float x2; })arg1 to:(struct CGPoint { float x1; float x2; })arg2;
- (void)setHighlightPath;
- (BOOL)hitControl:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPDFNode { }*)textLineAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)track:(struct CGPoint { float x1; float x2; })arg1;
- (void)endTracking;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })uniqueParagraphBounds;
- (void)setTouchHandler:(id)arg1;
- (BOOL)magnify;
- (id)firstSelection;
- (id)lastSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectangle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastRectangle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBounds;
- (BOOL)tracking;
- (BOOL)trackingLeftControl;
- (void)drawWidgetControls:(struct CGContext { }*)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)selections;
- (struct CGPDFNode { }*)paragraph:(struct CGPDFNode { }*)arg1;
- (void)showControls;
- (void)clear;
- (void)layout;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)dealloc;

@end
