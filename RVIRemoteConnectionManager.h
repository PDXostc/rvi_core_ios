// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// 
// Copyright (c) 2016 Jaguar Land Rover.
//
// This program is licensed under the terms and conditions of the
// Mozilla Public License, version 2.0. The full text of the 
// Mozilla Public License is at https://www.mozilla.org/MPL/2.0/
// 
// File:    RVIRemoteConnectionManager.h
// Project: HVACDemo
// 
// Created by Lilli Szafranski on 1/28/16.
//
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#import <Foundation/Foundation.h>
#import "RVIDlinkPacket.h"

@protocol RVIRemoteConnectionManagerDelegate <NSObject>
/**
 * Callback method for when the remote connection did connect.
 */
- (void)onRemoteConnectionDidConnect(;

/**
 * Callback method for when the remote connection did disconnect.
 */
- (void)onRemoteConnectionDidDisconnect:(NSError *)trigger;

/**
 * Callback method for when the remote connection did fail to connect.
 *
 * @param error the error
 */
- (void)onRemoteConnectionDidFailToConnect:(NSError *)error;

/**
 * Callback method for when the remote connection did receive data.
 *
 * @param data the data that was received
 */
- (void)onRemoteConnectionDidReceiveData:(NSString *)data;

/**
 * Callback method for when the remote connection did send data to the RVI node.
 */
- (void)onDidSendDataToRemoteConnection:(RVIDlinkPacket *)packet;

/**
 * Callback method for when the the remote connection did fail to send data to the RVI node.
 *
 * @param error the error
 */
- (void)onDidFailToSendDataToRemoteConnection:(NSError *)error;
@end

@interface RVIRemoteConnectionManager : NSObject
@end
