/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)sessionConfigurationForLoader:(id)arg1;

@required
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;

@end

