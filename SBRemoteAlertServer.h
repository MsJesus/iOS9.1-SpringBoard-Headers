//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemServiceFacility.h"

#import "SBRemoteAlertControllerDelegate.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface SBRemoteAlertServer : FBSystemServiceFacility <SBRemoteAlertControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_tokenPortToToken;
    NSMapTable *_tokenPortToControllerMap;
    NSMapTable *_tokenPortToClientsMap;
}

+ (id)sharedInstance;
- (void)queue_remoteAlertController:(id)arg1 didInvalidateWithReason:(long long)arg2 underlyingError:(id)arg3;
- (void)queue_remoteAlertControllerDidChangeActivationState:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)_queue_notifyClients:(id)arg1 remoteAlertForToken:(id)arg2 didInvalidateWithReason:(long long)arg3 underlyingError:(id)arg4;
- (id)_queue_addControllerWithConfiguration:(id)arg1 token:(id)arg2 forClient:(id)arg3;
- (void)dealloc;
- (id)_init;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

