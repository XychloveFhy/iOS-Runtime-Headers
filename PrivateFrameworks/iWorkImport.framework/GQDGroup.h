/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDWPExternalTextWrap;



@interface GQDGroup : GQDDrawable <GQDNameMappable>
{
    struct __CFArray { } *mDrawables;
    GQDWPExternalTextWrap *mExternalTextWrap;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)externalTextWrap;
- (struct __CFArray { }*)drawables;
- (void)dealloc;

@end
