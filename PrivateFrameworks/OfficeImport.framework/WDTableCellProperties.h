/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, NSDate, WDBorder, WDShading;



@interface WDTableCellProperties : NSObject 
{
    short mWidth;
    short mPosition;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *diagonalUpBorder; 
        WDBorder *diagonalDownBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        NSInteger widthType; 
        short topMargin; 
        NSInteger topMarginType; 
        short bottomMargin; 
        NSInteger bottomMarginType; 
        short leftMargin; 
        NSInteger leftMarginType; 
        short rightMargin; 
        NSInteger rightMarginType; 
        NSInteger verticalAlignment; 
        NSInteger deleted; 
        NSInteger edited; 
        NSInteger formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int diagonalUpBorderOverridden : 1; 
        unsigned int diagonalDownBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int topMarginOverridden : 1; 
        unsigned int topMarginTypeOverridden : 1; 
        unsigned int bottomMarginOverridden : 1; 
        unsigned int bottomMarginTypeOverridden : 1; 
        unsigned int leftMarginOverridden : 1; 
        unsigned int leftMarginTypeOverridden : 1; 
        unsigned int rightMarginOverridden : 1; 
        unsigned int rightMarginTypeOverridden : 1; 
        unsigned int verticalAlignmentOverridden : 1; 
        unsigned int verticallyMergedCell : 1; 
        unsigned int verticallyMergedCellOverridden : 1; 
        unsigned int firstInSetOfVerticallyMergedCells : 1; 
        unsigned int firstInSetOfVerticallyMergedCellsOverridden : 1; 
        unsigned int noWrap : 1; 
        unsigned int noWrapOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mOriginalProperties;
    struct { 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *diagonalUpBorder; 
        WDBorder *diagonalDownBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        NSInteger widthType; 
        short topMargin; 
        NSInteger topMarginType; 
        short bottomMargin; 
        NSInteger bottomMarginType; 
        short leftMargin; 
        NSInteger leftMarginType; 
        short rightMargin; 
        NSInteger rightMarginType; 
        NSInteger verticalAlignment; 
        NSInteger deleted; 
        NSInteger edited; 
        NSInteger formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int diagonalUpBorderOverridden : 1; 
        unsigned int diagonalDownBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int topMarginOverridden : 1; 
        unsigned int topMarginTypeOverridden : 1; 
        unsigned int bottomMarginOverridden : 1; 
        unsigned int bottomMarginTypeOverridden : 1; 
        unsigned int leftMarginOverridden : 1; 
        unsigned int leftMarginTypeOverridden : 1; 
        unsigned int rightMarginOverridden : 1; 
        unsigned int rightMarginTypeOverridden : 1; 
        unsigned int verticalAlignmentOverridden : 1; 
        unsigned int verticallyMergedCell : 1; 
        unsigned int verticallyMergedCellOverridden : 1; 
        unsigned int firstInSetOfVerticallyMergedCells : 1; 
        unsigned int firstInSetOfVerticallyMergedCellsOverridden : 1; 
        unsigned int noWrap : 1; 
        unsigned int noWrapOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mTrackedProperties;
    WDDocument *mDocument;
}


- (BOOL)noWrap;
- (void)setNoWrap:(BOOL)arg1;
- (id)document;
- (void)originalToTracked;
- (void)clearShading;
- (id)diagonalUpBorder;
- (BOOL)isDiagonalUpBorderOverridden;
- (id)diagonalDownBorder;
- (BOOL)isDiagonalDownBorderOverridden;
- (NSInteger)topMarginType;
- (BOOL)isTopMarginTypeOverridden;
- (NSInteger)bottomMarginType;
- (BOOL)isBottomMarginTypeOverridden;
- (NSInteger)leftMarginType;
- (BOOL)isLeftMarginTypeOverridden;
- (NSInteger)rightMarginType;
- (BOOL)isRightMarginTypeOverridden;
- (BOOL)verticallyMergedCell;
- (BOOL)isVerticallyMergedCellOverridden;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (BOOL)isNoWrapOverridden;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (unsigned short)indexToAuthorIDOfEdit;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (id)deletionDate;
- (void)setDeletionDate:(id)arg1;
- (BOOL)isDeletionDateOverridden;
- (id)editDate;
- (void)setEditDate:(id)arg1;
- (BOOL)isEditDateOverridden;
- (void)addPropertiesValues:(struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; NSInteger x10; short x11; NSInteger x12; short x13; NSInteger x14; short x15; NSInteger x16; short x17; NSInteger x18; NSInteger x19; NSInteger x20; NSInteger x21; NSInteger x22; unsigned short x23; unsigned short x24; unsigned short x25; id x26; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; }*)arg1 to:(struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; NSInteger x10; short x11; NSInteger x12; short x13; NSInteger x14; short x15; NSInteger x16; short x17; NSInteger x18; NSInteger x19; NSInteger x20; NSInteger x21; NSInteger x22; unsigned short x23; unsigned short x24; unsigned short x25; id x26; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; }*)arg2;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (id)formattingChangeDate;
- (BOOL)isFormattingChangeDateOverridden;
- (NSInteger)edited;
- (BOOL)isEditedOverridden;
- (NSInteger)formattingChanged;
- (BOOL)isFormattingChangedOverridden;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (void)setWidthType:(NSInteger)arg1;
- (void)setTopMarginType:(NSInteger)arg1;
- (void)setBottomMarginType:(NSInteger)arg1;
- (void)setLeftMarginType:(NSInteger)arg1;
- (void)setRightMarginType:(NSInteger)arg1;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (id)mutableDiagonalDownBorder;
- (id)mutableDiagonalUpBorder;
- (void)addProperties:(id)arg1;
- (void)setFormattingChanged:(NSInteger)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (id)mutableTopBorder;
- (id)mutableLeftBorder;
- (id)mutableBottomBorder;
- (id)mutableRightBorder;
- (NSInteger)resolveMode;
- (id)initWithDocument:(id)arg1;
- (void)setResolveMode:(NSInteger)arg1;
- (id)mutableShading;
- (void)setEdited:(NSInteger)arg1;
- (void)setDeleted:(NSInteger)arg1;
- (void)setVerticalAlignment:(NSInteger)arg1;
- (void)setBottomMargin:(short)arg1;
- (BOOL)isWidthTypeOverridden;
- (NSInteger)widthType;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)insideHorizontalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (id)insideVerticalBorder;
- (BOOL)isTopBorderOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isRightBorderOverridden;
- (id)topBorder;
- (id)leftBorder;
- (id)rightBorder;
- (BOOL)isVerticalAlignmentOverridden;
- (NSInteger)verticalAlignment;
- (void)setTopMargin:(short)arg1;
- (void)setLeftMargin:(short)arg1;
- (BOOL)isShadingOverridden;
- (id)shading;
- (BOOL)isBottomBorderOverridden;
- (id)bottomBorder;
- (BOOL)isLeftMarginOverridden;
- (BOOL)isRightMarginOverridden;
- (BOOL)isTopMarginOverridden;
- (BOOL)isBottomMarginOverridden;
- (short)leftMargin;
- (short)rightMargin;
- (short)topMargin;
- (short)bottomMargin;
- (BOOL)isDeletedOverridden;
- (NSInteger)deleted;
- (short)width;
- (void)setWidth:(short)arg1;
- (void)setRightMargin:(short)arg1;
- (short)position;
- (void)setPosition:(short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
