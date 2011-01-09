/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;



@interface CoreDAVContainerMultiGetTask : CoreDAVTask 
{
    NSSet *_hrefs;
    char *_appSpecificNamespace;
    char *_appSpecificMultiGetCommand;
    char *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property <CoreDAVContainerMultiGetTaskDelegate> *delegate;


- (id)httpMethod;
- (id)requestBody;
- (id)_initWithHREFs:(id)arg1 atRelativeURI:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithHREFs:(id)arg1 atRelativeURI:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (void)dealloc;

@end
