/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSMutableArray, WBUInjectedJavaScriptController;

@interface WBUWebClipMetadataFetcher : NSObject {

	NSDictionary* _metaTags;
	NSArray* _linkTags;
	NSMutableArray* _metadataConsumers;
	BOOL _fetchingCompleted;
	WBUInjectedJavaScriptController* _jsController;

}
+(id)metadataFetcherScriptSource;
-(void)_startFetchingMetadata;
-(id)_webClipLinkTagWithDictionary:(id)arg1 ;
-(id)initWithInjectedJavascriptController:(id)arg1 ;
-(void)fetchMetadataWithConsumer:(/*^block*/id)arg1 ;
@end

