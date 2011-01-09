/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;



@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor>
{
    BOOL _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}


- (void)visitPredicateOperator:(id)arg1;
- (id)keypaths;
- (id)subqueries;
- (id)setExpressions;
- (id)allModifierPredicates;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (id)init;
- (void)dealloc;

@end
