/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CPColorPalettizer : NSObject 
{
    struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; } *m_pTree;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*isDefaultPaletteSize;

}


- (id)initWitMaxPaletteSize:(NSUInteger)arg1;
- (id)initWitDefaultPaletteSize;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)addNSColor:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)addQuadColor:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
     /* Encoded args for previous method: B12@0:4{_tagRgbQuad=CCCC}8 */

- (void)createPalette;
- (NSUInteger)paletteColorCount;
- (id)getPaletteDataRaw;
- (id)getPngPaletteData;
- (id)getPaletteData;
- (NSInteger)paletteIndexFromNSColor:(id)arg1;
- (NSInteger)paletteIndexFromQuadColor:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (NSInteger)createOctree:(struct _tagOctree {}**)arg1 maxPaletteSize:(unsigned short)arg2;
- (NSInteger)deleteOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1;
- (NSInteger)createNodeOctree:(struct _tagOctreeNode {}**)arg1 parent:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; NSUInteger x3; struct _tagFPRgbTriple { NSUInteger x_4_1_1; NSUInteger x_4_1_2; NSUInteger x_4_1_3; } x4; unsigned short x5; }*)arg2;
- (NSInteger)deleteNodeOctree:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; NSUInteger x3; struct _tagFPRgbTriple { NSUInteger x_4_1_1; NSUInteger x_4_1_2; NSUInteger x_4_1_3; } x4; unsigned short x5; }*)arg1;
- (NSInteger)deleteListOctree:(struct _tagLevelItem { struct _tagLevelItem {} *x1; struct _tagOctreeNode {} *x2; }*)arg1;
- (NSInteger)addPixelToOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1 pixel:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg2;
- (NSInteger)reduceOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1;
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode { struct _tagOctreeNode {} *x1; struct _tagOctreeNode {} *x2[8]; NSUInteger x3; struct _tagFPRgbTriple { NSUInteger x_4_1_1; NSUInteger x_4_1_2; NSUInteger x_4_1_3; } x4; unsigned short x5; }*)arg1 paletteEntry:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg2 index:(unsigned short)arg3;
- (NSInteger)rgbToIndexOctree:(struct _tagOctree { struct _tagOctreeNode {} *x1; unsigned short x2; unsigned short x3; struct _tagRgbQuad {} *x4; struct _tagLevelItem {} *x5[9]; }*)arg1 source:(struct _tagRgbQuad { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg2 destination:(char *)arg3;
- (void)dealloc;

@end
