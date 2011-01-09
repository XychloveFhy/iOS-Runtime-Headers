/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableSet, NSString, NSManagedObject;



@interface _NSNotifyingWrapperMutableSet : NSMutableSet 
{
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}


- (BOOL)isSubsetOfSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (void)intersectSet:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)unionSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (id)valueForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)minusSet:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)count;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (void)dealloc;

@end
