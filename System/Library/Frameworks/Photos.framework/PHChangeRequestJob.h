/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@protocol OS_xpc_object;
@class NSSet, NSObject;

@interface PHChangeRequestJob : PLDaemonJob {

	NSSet* _inserts;
	NSSet* _updates;
	NSSet* _deletes;
	/*^block*/id _completionHandler;
	NSObject*<OS_xpc_object> _xpcInserts;
	NSObject*<OS_xpc_object> _xpcUpdates;
	NSObject*<OS_xpc_object> _xpcDeletes;

}

@property (nonatomic,copy) NSSet * inserts;                                    //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,copy) NSSet * updates;                                    //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy) NSSet * deletes;                                    //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcInserts;              //@synthesize xpcInserts=_xpcInserts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcUpdates;              //@synthesize xpcUpdates=_xpcUpdates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcDeletes;              //@synthesize xpcDeletes=_xpcDeletes - In the implementation block
+(void)applyPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)_addChangeRequests:(id)arg1 toXPCDict:(id)arg2 withKey:(const char*)arg3 ;
-(NSSet *)inserts;
-(NSSet *)deletes;
-(void)setInserts:(NSSet *)arg1 ;
-(void)setUpdates:(NSSet *)arg1 ;
-(void)setDeletes:(NSSet *)arg1 ;
-(void)setXpcInserts:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setXpcUpdates:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setXpcDeletes:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcInserts;
-(NSObject*<OS_xpc_object>)xpcUpdates;
-(NSObject*<OS_xpc_object>)xpcDeletes;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)run;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)handleReply;
-(NSSet *)updates;
@end

