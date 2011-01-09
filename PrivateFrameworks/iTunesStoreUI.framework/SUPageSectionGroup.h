/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;



@interface SUPageSectionGroup : NSObject <NSCopying>
{
    NSInteger _defaultSectionIndex;
    NSArray *_sections;
    NSInteger _style;
}

@property NSInteger style;
@property(retain) NSArray *sections;
@property NSInteger defaultSectionIndex;


- (NSInteger)style;
- (void)setStyle:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (NSInteger)_sectionStyleForString:(id)arg1;
- (void)setDefaultSectionIndex:(NSInteger)arg1;
- (NSInteger)defaultSectionIndex;
- (BOOL)loadFromDictionary:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;

@end
