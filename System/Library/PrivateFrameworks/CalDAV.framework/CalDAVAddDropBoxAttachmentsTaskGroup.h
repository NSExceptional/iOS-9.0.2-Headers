/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>
#import <libobjc.A.dylib/CoreDAVTaskGroupDelegate.h>

@class NSDictionary, NSMutableDictionary, NSURL, NSSet, CoreDAVUpdateACLTaskGroup, NSString;

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {

	BOOL _attendeesCanManageDropBox;
	int _state;
	NSDictionary* _putFailureSizes;
	NSMutableDictionary* _sentAttachmentURLsToETags;
	NSURL* _dropboxURL;
	NSDictionary* _attachments;
	NSDictionary* _contentTypes;
	NSSet* _attendeePrincipalURLs;
	NSSet* _aceItems;
	CoreDAVUpdateACLTaskGroup* _updateACLTaskGroup;

}

@property (nonatomic,retain,readonly) NSDictionary * etags; 
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDictionary * putFailureSizes;                               //@synthesize putFailureSizes=_putFailureSizes - In the implementation block
@property (assign,nonatomic) BOOL attendeesCanManageDropBox;                               //@synthesize attendeesCanManageDropBox=_attendeesCanManageDropBox - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sentAttachmentURLsToETags;              //@synthesize sentAttachmentURLsToETags=_sentAttachmentURLsToETags - In the implementation block
@property (nonatomic,retain) NSURL * dropboxURL;                                           //@synthesize dropboxURL=_dropboxURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attachments;                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSDictionary * contentTypes;                                  //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) NSSet * attendeePrincipalURLs;                                //@synthesize attendeePrincipalURLs=_attendeePrincipalURLs - In the implementation block
@property (nonatomic,retain) NSSet * aceItems;                                             //@synthesize aceItems=_aceItems - In the implementation block
@property (nonatomic,retain) CoreDAVUpdateACLTaskGroup * updateACLTaskGroup;               //@synthesize updateACLTaskGroup=_updateACLTaskGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dropboxACEItemsForPrincipalURLs:(id)arg1 baseURL:(id)arg2 writable:(BOOL)arg3 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSDictionary *)attachments;
-(void)setAttachments:(NSDictionary *)arg1 ;
-(void)startTaskGroup;
-(NSURL *)dropboxURL;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)setAttendeesCanManageDropBox:(BOOL)arg1 ;
-(void)setSentAttachmentURLsToETags:(NSMutableDictionary *)arg1 ;
-(void)setDropboxURL:(NSURL *)arg1 ;
-(void)setContentTypes:(NSDictionary *)arg1 ;
-(void)setAttendeePrincipalURLs:(NSSet *)arg1 ;
-(void)setAceItems:(NSSet *)arg1 ;
-(NSMutableDictionary *)sentAttachmentURLsToETags;
-(NSSet *)aceItems;
-(NSSet *)attendeePrincipalURLs;
-(BOOL)attendeesCanManageDropBox;
-(void)setUpdateACLTaskGroup:(CoreDAVUpdateACLTaskGroup *)arg1 ;
-(CoreDAVUpdateACLTaskGroup *)updateACLTaskGroup;
-(NSDictionary *)contentTypes;
-(void)_updateACLWithState:(int)arg1 ;
-(void)_sendAttachments;
-(void)_makeDropBox;
-(void)setPutFailureSizes:(NSDictionary *)arg1 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 dropboxURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 attendeePrincipalURLs:(id)arg5 attendeesCanManageDropBox:(BOOL)arg6 taskManager:(id)arg7 ;
-(NSDictionary *)etags;
-(NSDictionary *)putFailureSizes;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
@end

