/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicEntityViewDescriptor, NSString, NSArray;

@interface MusicLibraryViewConfiguration : NSObject {

	MusicEntityViewDescriptor* _entityViewDescriptor;
	BOOL _supportsSplitView;
	BOOL _wantsImmediateHandlingOfEditingChangeRecords;
	NSString* _iconName;
	NSString* _identifier;
	NSString* _title;
	NSArray* _userActivityItemTypes;
	Class _viewControllerClass;

}

@property (nonatomic,copy) NSString * iconName;                                               //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * userActivityItemTypes;                                   //@synthesize userActivityItemTypes=_userActivityItemTypes - In the implementation block
@property (nonatomic,retain) Class viewControllerClass;                                       //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
@property (nonatomic,readonly) BOOL wantsVisualIndicationOfSelection; 
@property (assign,nonatomic) BOOL supportsSplitView;                                          //@synthesize supportsSplitView=_supportsSplitView - In the implementation block
@property (assign,nonatomic) BOOL wantsImmediateHandlingOfEditingChangeRecords;               //@synthesize wantsImmediateHandlingOfEditingChangeRecords=_wantsImmediateHandlingOfEditingChangeRecords - In the implementation block
@property (nonatomic,readonly) MusicEntityViewDescriptor * entityViewDescriptor; 
-(void)setIconName:(NSString *)arg1 ;
-(NSString *)iconName;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(Class)viewControllerClass;
-(id)newViewController;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)setViewControllerClass:(Class)arg1 ;
-(MusicEntityViewDescriptor *)entityViewDescriptor;
-(void)setWantsImmediateHandlingOfEditingChangeRecords:(BOOL)arg1 ;
-(void)setUserActivityItemTypes:(NSArray *)arg1 ;
-(BOOL)canDeleteEntityValueContext:(id)arg1 ;
-(void)applyEntityProviderChangeRecords:(id)arg1 ;
-(long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(id)newSelectionEntityValueContext;
-(void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3 ;
-(void)setSupportsSplitView:(BOOL)arg1 ;
-(void)configureContentDescriptorForSearchResults:(id)arg1 ;
-(NSArray *)userActivityItemTypes;
-(BOOL)supportsSplitView;
-(void)enumerateContentViewConfigurationsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)canMoveEntityValueContext:(id)arg1 ;
-(BOOL)wantsVisualIndicationOfSelection;
-(id)newEntityValueContext;
-(BOOL)wantsImmediateHandlingOfEditingChangeRecords;
-(id)newContextualActionsEntityValueContext;
-(id)newContextualActionsSectionEntityValueContext;
-(id)newSelectionSectionEntityValueContext;
-(id)newSectionEntityValueContext;
-(BOOL)isEntityViewDescriptorLoaded;
@end

