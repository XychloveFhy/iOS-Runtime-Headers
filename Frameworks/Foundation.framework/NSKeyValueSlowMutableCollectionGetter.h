/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;



@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter 
{
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}


- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6;
- (id)baseGetter;
- (id)baseSetter;
- (BOOL)treatNilValuesLikeEmptyCollections;
- (void)dealloc;

@end
