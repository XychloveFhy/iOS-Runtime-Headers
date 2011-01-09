/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVErrorItem, NSString, NSMutableDictionary;



@interface CoreDAVResponseItem : CoreDAVItem <CoreDAVParsingAcceptingTopLevelItems>
{
    NSString *_href;
    BOOL _hasPropertyError;
    NSMutableDictionary *_retrievedSuccessfulPropertiesToValues;
    NSString *_topLevelStatus;
    CoreDAVErrorItem *_topLevelErrorItem;
    NSString *_responseDescription;
}

@property(readonly) NSDictionary *successfulPropertiesToValues;
@property(retain) NSString *responseDescription;
@property(retain) CoreDAVErrorItem *topLevelErrorItem;
@property(retain) NSString *topLevelStatus;
@property(retain) NSMutableDictionary *retrievedSuccessfulPropertiesToValues;
@property BOOL hasPropertyError;
@property(retain) NSString *href;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;
+ (BOOL)errorOnUnknownChildren;

- (void)setHref:(id)arg1;
- (id)href;
- (void)setUnescapedHref:(id)arg1;
- (id)topLevelErrorItem;
- (void)setTopLevelErrorItem:(id)arg1;
- (id)topLevelStatus;
- (void)setTopLevelStatus:(id)arg1;
- (id)retrievedSuccessfulPropertiesToValues;
- (void)setRetrievedSuccessfulPropertiesToValues:(id)arg1;
- (BOOL)hasPropertyError;
- (void)setHasPropertyError:(BOOL)arg1;
- (id)responseDescription;
- (void)setResponseDescription:(id)arg1;
- (void)addNewTopLevelItem:(id)arg1;
- (id)initWithXMLParser:(id)arg1 nameSpace:(id)arg2 elementName:(id)arg3 nodeAttributes:(id)arg4 root:(id)arg5 parent:(id)arg6 parentSetter:(SEL)arg7 ruleForMe:(id)arg8;
- (id)copyCoreDAVParseRules;
- (id)successfulPropertiesToValues;
- (id)description;
- (void)dealloc;

@end
