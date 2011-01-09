/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADPath;



@interface CMFreeFormShapeBuilder : CMLineShapeBuilder 
{
    OADPath *_path;
    struct CGSize { 
        float width; 
        float height; 
    } _space;
}


- (void)setPath:(id)arg1;
- (struct CGPoint { float x1; float x2; })_renderPathElement:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 inPath:(struct CGPath { }*)arg3;
- (void)setSpace:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPath { }*)createShapeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (void)dealloc;

@end
