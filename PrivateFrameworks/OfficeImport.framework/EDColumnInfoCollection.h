/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorksheet, EDResources;



@interface EDColumnInfoCollection : EDSortedCollection 
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}


- (id)columnInfoCreateIfNilForColumnNumber:(NSInteger)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (id)columnInfoForColumnNumber:(NSInteger)arg1;
- (void)dealloc;

@end
