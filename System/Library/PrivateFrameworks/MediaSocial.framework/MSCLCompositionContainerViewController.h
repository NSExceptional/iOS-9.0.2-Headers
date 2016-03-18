/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/MSCLComposePostViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIModalDocumentViewController.h>

@protocol MSCLComposePostDelegate, SKUIModalDocumentController;
@class UIBarButtonItem, MSCLComposePostViewController, MSCLConfiguration, MSCLStoreItem, MSCLLoadConfigurationOperation, UINavigationController, NSMutableArray, NSString;

@interface MSCLCompositionContainerViewController : SKUIViewController <MSCLComposePostViewControllerDelegate, SKUIModalDocumentViewController> {

	UIBarButtonItem* _cancelButtonItem;
	MSCLComposePostViewController* _composePostViewController;
	MSCLConfiguration* _configuration;
	id<MSCLComposePostDelegate> _delegate;
	MSCLStoreItem* _item;
	MSCLLoadConfigurationOperation* _loadConfigurationOperation;
	id<SKUIModalDocumentController> _modalDocumentController;
	UINavigationController* _navigationController;
	NSMutableArray* _pendingAttachments;
	UIBarButtonItem* _shareButtonItem;

}

@property (assign,nonatomic,__weak) id<MSCLComposePostDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) MSCLConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUIModalDocumentController> modalDocumentController;              //@synthesize modalDocumentController=_modalDocumentController - In the implementation block
@property (nonatomic,readonly) BOOL needsNavigationDocument; 
-(void)setDelegate:(id<MSCLComposePostDelegate>)arg1 ;
-(void)dealloc;
-(id<MSCLComposePostDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(MSCLConfiguration *)configuration;
-(id)initWithDocument:(id)arg1 options:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_composePostViewController;
-(id)_newLoadingViewController;
-(void)_reloadNavigationItemForViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addPendingAttachments;
-(void)_finishLoadWithConfiguration:(id)arg1 clientContext:(id)arg2 error:(id)arg3 ;
-(void)_dismissWithResult:(long long)arg1 ;
-(void)_sendLoadDidFailWithError:(id)arg1 ;
-(void)composePostViewController:(id)arg1 contentDidChange:(BOOL)arg2 ;
-(void)addAttachments:(id)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)_shareButtonAction:(id)arg1 ;
-(id<SKUIModalDocumentController>)modalDocumentController;
-(void)setModalDocumentController:(id<SKUIModalDocumentController>)arg1 ;
-(BOOL)needsNavigationDocument;
@end

