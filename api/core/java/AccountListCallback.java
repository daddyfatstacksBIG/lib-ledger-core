// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

package co.ledger.core;

import java.util.ArrayList;

/**
 *Callback triggered by main completed task,
 *returns optional result as list of template type T
 */
public abstract class AccountListCallback {
    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    public abstract void onCallback(ArrayList<Account> result, Error error);
}
