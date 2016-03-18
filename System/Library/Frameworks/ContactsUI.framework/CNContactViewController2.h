/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CNContactPropertyModelDelegate.h>
#import <libobjc.A.dylib/CNContactPropertyRemoteModelDelegate.h>

@class CNContactViewHostViewController, UITableView, CNContactPropertyModel, NSArray, NSString;

@interface CNContactViewController2 : UIViewController <UITableViewDataSource, UITableViewDelegate, CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate> {

	BOOL _ignoreViewWillBePresented;
	CNContactViewHostViewController* _remoteHostViewController;
	UITableView* _tableView;
	CNContactPropertyModel* _model;

}

@property (nonatomic,retain) id displayedObject; 
@property (nonatomic,retain) NSArray * displayedProperties; 
@property (nonatomic,retain) CNContactViewHostViewController * remoteHostViewController;              //@synthesize remoteHostViewController=_remoteHostViewController - In the implementation block
@property (retain) UITableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (retain) CNContactPropertyModel * model;                                                    //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)displayedProperties;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)_prepareViewController;
-(void)_setupViewController;
-(BOOL)outOfProcess;
-(id)displayedObject;
-(CNContactViewHostViewController *)remoteHostViewController;
-(void)setRemoteHostViewController:(CNContactViewHostViewController *)arg1 ;
-(void)pendingTransactions;
-(void)pendingRemoteTransactions:(id)arg1 ;
-(void)setDisplayedObject:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(CNContactPropertyModel *)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_isDelayingPresentation;
-(void)_endDelayingPresentation;
-(void)setModel:(CNContactPropertyModel *)arg1 ;
-(void)cancel:(id)arg1 ;
@end

