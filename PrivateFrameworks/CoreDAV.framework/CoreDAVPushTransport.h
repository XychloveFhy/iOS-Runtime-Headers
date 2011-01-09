/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSMutableDictionary;



@interface CoreDAVPushTransport : CoreDAVItem 
{
    NSString *_pushTransportType;
    NSMutableDictionary *_pushTransportChildren;
}

@property(readonly) NSDictionary *pushTransportChildren;
@property(readonly) NSString *pushTransportType;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;
+ (BOOL)errorOnUnknownChildren;

- (void)_setPushTransportChild:(id)arg1 forXMLKey:(const char *)arg2;
- (void)setApsBundleId:(id)arg1;
- (void)setXmppServer:(id)arg1;
- (void)setXmppURI:(id)arg1;
- (void)setCourierServer:(id)arg1;
- (id)pushTransportChildren;
- (id)pushTransportType;
- (id)initWithXMLParser:(id)arg1 nameSpace:(id)arg2 elementName:(id)arg3 nodeAttributes:(id)arg4 root:(id)arg5 parent:(id)arg6 parentSetter:(SEL)arg7 ruleForMe:(id)arg8;
- (id)copyCoreDAVParseRules;
- (id)description;
- (void)dealloc;
- (void)setSubscriptionURL:(id)arg1;
- (void)setTokenURL:(id)arg1;

@end
