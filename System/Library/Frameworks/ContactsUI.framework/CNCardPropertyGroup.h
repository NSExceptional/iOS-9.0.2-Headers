/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroup.h>

@class NSArray, NSString, CNPolicy, NSDictionary, CNContactStore;

@interface CNCardPropertyGroup : CNCardGroup {

	NSArray* _propertyItems;
	NSArray* _displayItems;
	NSArray* _editingItems;
	NSArray* _originalEditingItems;
	BOOL _showActionsWhenEmpty;
	BOOL _isAdded;
	NSString* _property;
	CNPolicy* _policy;
	NSDictionary* _linkedPolicies;
	CNContactStore* _contactStore;
	NSArray* _deletedItems;

}

@property (nonatomic,readonly) NSString * property;                              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSArray * propertyItems;                          //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,readonly) CNPolicy * policy;                                //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDictionary * linkedPolicies;                    //@synthesize linkedPolicies=_linkedPolicies - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL showActionsWhenEmpty;                          //@synthesize showActionsWhenEmpty=_showActionsWhenEmpty - In the implementation block
@property (getter=isMultiValue,nonatomic,readonly) BOOL multiValue; 
@property (getter=isFixedValue,nonatomic,readonly) BOOL fixedValue; 
@property (getter=isMultiLine,nonatomic,readonly) BOOL multiLine; 
@property (nonatomic,readonly) BOOL allowsAdding; 
@property (nonatomic,readonly) BOOL modified; 
@property (assign,nonatomic) BOOL isAdded;                                       //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,retain) NSArray * editingItems; 
@property (nonatomic,retain) NSArray * deletedItems;                             //@synthesize deletedItems=_deletedItems - In the implementation block
+(id)groupForProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5 ;
-(BOOL)allowsAdding;
-(id)displayItems;
-(NSArray *)editingItems;
-(id)_loadPropertyItems;
-(void)setShowActionsWhenEmpty:(BOOL)arg1 ;
-(id)initWithProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5 ;
-(BOOL)isMultiValue;
-(BOOL)isFixedValue;
-(NSArray *)deletedItems;
-(BOOL)modified;
-(id)_nextAvailableSocialService;
-(id)_nextAvailableInstantMessageService;
-(id)_nextAvailableLabel;
-(BOOL)canAddEditingItem;
-(void)setIsAdded:(BOOL)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(id)nextAvailableLabel;
-(BOOL)_arrayContainsMaxAllowedItems:(id)arg1 ;
-(void)setEditingItems:(NSArray *)arg1 ;
-(void)setDeletedItems:(NSArray *)arg1 ;
-(void)saveChangesForItems:(id)arg1 ;
-(id)_mergeItems:(id)arg1 forEditing:(BOOL)arg2 ;
-(BOOL)showActionsWhenEmpty;
-(BOOL)isAdded;
-(BOOL)_shoulShowGroupWhenEditing:(BOOL)arg1 ;
-(id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3 ;
-(NSArray *)propertyItems;
-(NSDictionary *)linkedPolicies;
-(void)_updateNameValuesForItems:(id)arg1 ;
-(BOOL)labelsAreUnique;
-(id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long*)arg4 ;
-(id)labelsForItem:(id)arg1 ;
-(id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2 ;
-(BOOL)isMultiLine;
-(BOOL)addEditingItem;
-(void)removeEditingItem:(id)arg1 ;
-(id)policyForItem:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)saveChanges;
-(CNPolicy *)policy;
-(id)description;
-(BOOL)isRequired;
-(NSString *)property;
@end

