/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */



@interface CoreDAVPropFindElement : NSObject 
{
    char *_nameSpace;
    char *_elementName;
    Class _parseClass;
}

@property Class parseClass;
@property char* elementName;
@property char* nameSpace;

+ (id)elementWithNameSpace:(const char *)arg1 elementName:(const char *)arg2 parseClass:(Class)arg3;

- (id)initWithNameSpace:(const char *)arg1 elementName:(const char *)arg2 parseClass:(Class)arg3;
- (Class)parseClass;
- (void)setNameSpace:(const char *)arg1;
- (void)setElementName:(const char *)arg1;
- (void)setParseClass:(Class)arg1;
- (const char *)nameSpace;
- (const char *)elementName;

@end
