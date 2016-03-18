/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCWidgetVisibilityDelegate.h>
#import <libobjc.A.dylib/_NCDataSourceManager.h>

@protocol _NCParentDataSourceManager;
@class NSArray, NCWidgetDataSource, NCWidgetVisibilityManager, NSString;

@interface NCWidgetDataSourceManager : NSObject <NCWidgetVisibilityDelegate, _NCDataSourceManager> {

	NCWidgetDataSource* _widgetDataSource;
	NCWidgetVisibilityManager* _widgetVisbilityManager;
	id _plugInDiscoveryToken;
	BOOL _isPublishing;
	/*^block*/id _didStartBlock;
	id<_NCParentDataSourceManager> _parentDataSourceManager;

}

@property (setter=_setPlugInDiscoveryToken:,getter=_plugInDiscoveryToken,nonatomic,retain) id plugInDiscoveryToken;              //@synthesize plugInDiscoveryToken=_plugInDiscoveryToken - In the implementation block
@property (getter=_widgetVisbilityManager,nonatomic,retain) NCWidgetVisibilityManager * widgetVisbilityManager;                  //@synthesize widgetVisbilityManager=_widgetVisbilityManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_NCParentDataSourceManager> parentDataSourceManager;                                             //@synthesize parentDataSourceManager=_parentDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
-(void)_start:(/*^block*/id)arg1 ;
-(id<_NCParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id<_NCParentDataSourceManager>)arg1 ;
-(void)_beginContinuousPlugInDiscovery;
-(void)_endContinuousPlugInDiscovery;
-(void)_updatePublishedWidgetExtensions:(id)arg1 ;
-(id)_widgetExtensionsDiscoveryAttributes;
-(BOOL)_shouldPublishWidgetExtension:(id)arg1 ;
-(void)_updateDataSourceWithExtension:(id)arg1 ;
-(void)_revokeExtensionWithIdentifier:(id)arg1 ;
-(id)_widgetVisbilityManager;
-(void)_setPlugInDiscoveryToken:(id)arg1 ;
-(void)widgetVisibilityDidChange;
-(id)_plugInDiscoveryToken;
-(void)setWidgetVisbilityManager:(NCWidgetVisibilityManager *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_stop:(/*^block*/id)arg1 ;
-(NSArray *)dataSources;
@end

