/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableDictionary;



@interface CoreDAVProp : CoreDAVItem <CoreDAVParsingAcceptingTopLevelItems>
{
    NSMutableDictionary *_propValues;
}

@property(readonly) NSDictionary *propValues;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;
+ (BOOL)errorOnUnknownChildren;

- (id)propValues;
- (void)addNewTopLevelItem:(id)arg1;
- (id)copyCoreDAVParseRules;
- (id)description;
- (void)dealloc;

@end
