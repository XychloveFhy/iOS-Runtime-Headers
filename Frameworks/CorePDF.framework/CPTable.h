/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPGraphicObject;



@interface CPTable : CPChunk <CPDisposable>
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } tableBounds;
    NSUInteger rowCount;
    float *rowY;
    NSUInteger columnCount;
    float *columnX;
    struct CGColor { } *backgroundColor;
    NSUInteger backgroundGraphicCount;
    CPGraphicObject **backgroundGraphics;
    NSUInteger usedGraphicCount;
    BOOL disposed;
}

@property NSUInteger rowCount;
@property NSUInteger columnCount;
@property(readonly) NSUInteger usedGraphicCount;
@property(readonly) NSUInteger backgroundGraphicCount;
@property(readonly) float *columnX;
@property(readonly) float *rowY;
@property(readonly) CGRect tableBounds;


- (void)setRowCount:(NSUInteger)arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (id)backgroundGraphicAtIndex:(NSUInteger)arg1;
- (NSUInteger)backgroundGraphicCount;
- (float*)rowY;
- (float*)columnX;
- (NSUInteger)usedGraphicCount;
- (void)incrementUsedGraphicCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableBounds;
- (void)dispose;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)rowCount;
- (NSUInteger)columnCount;
- (void)setColumnCount:(NSUInteger)arg1;
- (void)finalize;
- (struct CGColor { }*)backgroundColor;
- (void)dealloc;

@end
