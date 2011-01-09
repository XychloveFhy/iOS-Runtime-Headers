/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADParagraphProperties, CMStyle;



@interface PMBulletMapper : CMMapper 
{
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
    NSInteger mFontSize;
}

+ (id)stringForIndex:(NSInteger)arg1 withFormat:(NSInteger)arg2;

- (id)initWithOadProperties:(id)arg1 fontSize:(NSInteger)arg2 parent:(id)arg3;
- (NSInteger)bulletSize;
- (id)bulletFontName;
- (void)mapBulletColorWithState:(id)arg1;
- (id)makeBulletWithListState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end
